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
};
int main() {
Coordinate C1(10,7),C2(-5,10),C3;
C3=(C1,C2);
C3.show();
return 0;
}