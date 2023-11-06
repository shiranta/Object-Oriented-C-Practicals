#include <iostream>

using namespace std;
//parameterized constructor
class student
{
public:
    char name;
    int rollno;
    int marks;
    //parameterizied constructors
    student(char fname,int rollno,int score,char lname)
    {
        name=fname;
        rollno=rollno;
        marks=score;
    }
    void displaydata()
    {
        cout<<"Values from parametrized constructors aren"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl<<endl;
    }
};
int main()
{
  student s('A',2,67,'f'),st('B',3,56),std('C',4,98);//paramiterized constructors
  s.displaydata();
  st.displaydata();
  std.displaydata();
    return 0;
}
