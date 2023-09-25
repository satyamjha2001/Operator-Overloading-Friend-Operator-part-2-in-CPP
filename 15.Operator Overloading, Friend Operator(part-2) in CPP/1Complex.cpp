#include<iostream>
using namespace std;
class Complex
{   
    private:
    int a,b;
    public:
    void setData(int x,int y){a=x;b=y;}
    void showData(){cout<<endl<<"a="<<a<<" b="<<b;}
    friend Complex operator-(Complex);
};
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a=-C.a;
        temp.b=-C.b;
        return temp;
    }
int main() {
Complex c1,c2;
c1.setData(4,6);
c1.showData();
c2=-c1;
c2.showData();
return 0;
}