#include <iostream>
using namespace std;
class Integer
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void showData()
    {
        cout << "\n"
             << a;
    }
    friend bool operator!(Integer);
    friend bool operator==(Integer, Integer);
};
bool operator!(Integer I)
{
    return !(I.a);
}
bool operator==(Integer I1, Integer I2)
{
    return (I1.a == I2.a);
}
int main()
{
    Integer obj1, obj2;
    obj1.setData(-1);
    obj2.setData(-1);
    if (!obj1)
        cout << endl<< "True";
    else
        cout << endl<< "False";
    if (!obj2)
        cout << endl<< "True";
    else
        cout << endl<< "False";
    if (obj1 == obj2)
        cout << endl<< "They are equal";
    else
        cout << endl<< "They are not equal";

    return 0;
}