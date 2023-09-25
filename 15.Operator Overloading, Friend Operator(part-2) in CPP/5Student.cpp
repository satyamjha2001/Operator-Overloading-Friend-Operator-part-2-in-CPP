#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    int rollno;
    char name[20];
    int age;
    public:
    void setStudent(int r,const char n[],int a)
    {
        rollno=r;
        strcpy(name,n);
        age=a;
    }
    void showStudent()
    {
        cout<<endl<<"Roll no = "<<rollno;
        cout<<endl<<"Name = "<<name;
        cout<<endl<<"Age = "<<age;
    }
    bool operator==(const Student S)
    {
        return (rollno==S.rollno && age==S.age && (!strcmp(name,S.name)));
    }
};
int main() {
Student s1,s2,s3;
s1.setStudent(1,"satyam",21);
s1.showStudent();
s2.setStudent(1,"satyam",21);
s2.showStudent();
if(s1==s2)
cout<<endl<<"both are same student";
else
cout<<endl<<"Different student";
return 0;
}