#include <iostream>

using namespace std;
class Rectangle
{
public:

    double length;
    double width;
    double area;

    void calcarea();
    void getdata();
    void display();
};
void Rectangle::calcarea()
{
    area=length*width;
}
void Rectangle::getdata()
{
    cout<<"Enter length and width of the rectangle\n";
    if(length<0 || width<0)
    {
        cout<<"Invalid";
    }
    else
    {
    cin>>length>>width;
    }
}
void Rectangle::display()
{
    cout<<"Length of rectangle is="<<length;
    cout<<"\nwidth of rectangle is="<<width;
    calcarea();
    cout<<"\nArea of the rectangle is= "<<area;

}

int main()
{
    Rectangle r;
    r.getdata();
    r.display();
    return 0;
}
