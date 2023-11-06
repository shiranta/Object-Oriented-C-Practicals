#include <iostream>

using namespace std;
class student
{
public:
    char name[20];
    int rollnum;
    void get_data();
    int displaydata();

};
void student::get_data()
{
    cout<<"\nEnter your name:";
    cin>>name;
    cout<<"\nEnter your roll no:";
    cin>>rollnum;
}
int student::displaydata()
{
    cout<<"\n\nStudent Details\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number"<<rollnum<<endl;
}
int main()
{

    student std1,std2;
    std1.get_data();
    std2.get_data();

    std1.displaydata();
    std2.displaydata();
    return 0;
}
