#include <iostream>
using namespace std;
class student{
private:
    int studentNo;
    int mark1;
    int mark2;
    int mark3;
public:
    void setstudentNo(int studentNo);
    int setmarks(int mark1,int mark2,int mark3);
    int calcavg();
};
void student::setstudentNo(int studentNo)
{
    int no;
    cout<<"Enter the student number\n";
    cin>>no;
    studentNo=no;

}
int student::setmarks(int mark1,int mark2,int mark3)
{
    int m1,m2,m3;
    cout<<"Enter marks for subject 1\n";
    cin>>m1;
    mark1=m1;
    cout<<"Enter marks for subject 2\n";
    cin>>m2;
    mark2=m2;
    cout<<"Enter marks for subject 3\n";
    cin>>m3;
    mark3=m3;
}
int student::calcavg()
{
    int avg=(m1+m2+m3)/3;
    return avg;
}

int main()
{
    cout<<"==========================================";
    cout<<"student Details";
    student std1,std2;
    cout<<std1.mark1;
    cout<<std1.mark2;
    cout<<"Mark for subject 1"<<;
    return 0;
}
