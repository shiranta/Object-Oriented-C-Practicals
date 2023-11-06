#include <iostream>

using namespace std;
//protected member function
class student
{
protected:
    char name[20];
    double rollno;
    void getdata();
};
class academic:public student//Derived class
{
public:
    double marks;
    void academicdetails();
    void display();
};
void academic::academicdetails()
{
    getdata();
    cout<<"\nEnter your marks:\n";
    cin>>marks;
}
void student::getdata()
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<"\nEnter your roll Number: ";
    cin>>rollno;
}
void academic::display()
{
    cout<<"\n\nStudent Details\n\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<rollno<<endl;
    cout<<"Marks:"<<marks;
}
int main()
{
    academic a;
    a.academicdetails();
    a.display();

    return 0;
}
