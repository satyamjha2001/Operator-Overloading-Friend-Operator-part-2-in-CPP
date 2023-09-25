#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate():x(0),y(0){}
        Coordinate(int x,int y):x(x),y(y){}
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        void show(){ cout<<"\n("<<x<<","<<y<<")";}
        friend ostream& operator<<(ostream&,Coordinate);
        friend istream& operator>>(istream&,Coordinate&);
};
        ostream& operator<<(ostream &dout,Coordinate C)
        {
            cout<<"\n("<<C.x<<","<<C.y<<")";
            return dout;
        }
        istream& operator>>(istream &din,Coordinate &C)
        {   cout<<endl<<"Enter x and y : ";
            cin>>C.x>>C.y;
            return din;
        }

int main() {
Coordinate C1(10,7),C2(-5,10),C3,C4;
C3=(C1,C2);
C3.show();
cin>>C4;
cout<<C4;
return 0;
}