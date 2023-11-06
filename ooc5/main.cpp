#include <iostream>

using namespace std;
//calling outside a class
class addition
{
private:
    int no1;
    int no2;
public:
    void getdetails();
    int addsum();
};
void addition::getdetails()
{
    cout<<"Enter two numbers\n";
    cin>>no1>>no2;
}
int addition::addsum()
{
    int add=no1+no2;
    return cout<<"Number 1="<<no1<<"\nNumber2="<<no2<<"\nAddition is="<<add<<endl;
}
int main()
{
    addition a;
    a.getdetails();
    a.addsum();

    return 0;
}
