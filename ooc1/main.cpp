#include <iostream>

using namespace std;
class rectangle{
private:
    int Length;
    int Width;
public:
    void setWidth(int w);
    void setLength(int l);
    int calcArea();

};
void rectangle::setWidth(int w)
{
    Width=w;
}
void rectangle::setLength(int l)
{
    Length=l;
}
int rectangle::calcArea()
{
    int area=Width*Length;
    return area;
}
int main()
{
    rectangle rect1,rect2;
    rect1.setLength(10);
    rect1.setWidth(5);

    rect2.setLength(10);
    rect2.setWidth(14);

    cout<<rect1.calcArea()<<endl;
    cout<<rect2.calcArea()<<endl;

    return 0;
}
