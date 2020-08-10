#include <iostream>
#include <cmath>
using namespace std;
const float inf= 2e6;
// a function to calculate the slope of a line
int up,down;
float slope (float a, float b)
{
    if (a==0)
        return inf;
    return (b/a);
}
// a function to see if the point (X,Y) is to the up or down side of line y=mx+p
bool calc (float m, float p,float X,float Y)
{
    float a= (m*X+p);
    if (Y>a)
        return true;
    else
        return false;
}
int main()
{
    float x,y,xx,yy,xxx,yyy,xxxx,yyyy,X,Y;
    cout <<"Enter The Parallelogram's Coordinations (Clockwise or Counterclockwise) Followed By The Point's Coordinations.\n";
    cin >>x>>y>>xx>>yy>>xxx>>yyy>>xxxx>>yyyy>>X>>Y;
    float m1= slope(xx-x,yy-y);
    float m2= slope(xxx-xx,yyy-yy);
    float m3= slope(xxxx-xxx,yyyy-yyy);
    float m4= slope(x-xxxx,y-yyyy);
    float p1= (y-m1*x);
    float p2= (yy-m2*xx);
    float p3= (yyy-m3*xxx);
    float p4= (yyyy-m4*xxxx);
    bool yes=false;
    //seeing if the opposite sides of the parallelogram are on the opposite side of the point
    if (calc(m1,p1,X,Y)!=calc(m3,p3,X,Y))
    {
        if (calc(m2,p2,X,Y)!=calc(m4,p4,X,Y))
        {
            yes=true;
        }
    }
    if (yes)
        cout <<"The Point is Inside The Parallelogram.";
    else
        cout <<"The Point is Outside The Parallelogram.";
    return 0;
}
