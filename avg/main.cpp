#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"how many numbers\n";
    cin>>n;
    float sum=0;
    float a;
    for(int i=0 ;i<=n-1;i++)
    {
        cout<<"Enter a number";
        cin>>a;
        sum=sum+a;
    }
    float avg;
    avg=sum/n;
    cout <<"Sum of numbers are "<<sum<<endl;
    cout<<"average of numbers are "<<avg<<endl;
    return 0;
}
