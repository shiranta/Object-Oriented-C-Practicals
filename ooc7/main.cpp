#include <iostream>
//constructors
using namespace std;
class student
{
public:
    char name[20];
    int rollno;
    int marks;
    //Default constructor
    student();//constructors are special kinds of methods ,default constructors don't use parameters.
    void displaydata()
    {
        cout<<"Values from default constructors are:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Marks"<<marks<<endl;

    }
};
student::student()
{
    name='Shirantha';
    rollno=7;
    marks=87;
}
int main()
{
    student s;//Invoke default constructor
    s.displaydata();
    return 0;
}
