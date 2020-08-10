#include <iostream>
#include <cmath>
using namespace std;
float len (float a,float b)
{
    return (sqrt(a*a+b*b));
}
int main()
{
    float x,y,xx,yy,xxx,yyy;
    cout <<"Enter The Coordinations of The Triangle.\n";
    cin >>x>>y>>xx>>yy>>xxx>>yyy;
    float len1= len(xx-x,yy-y);
    float len2= len(xxx-x,yyy-y);
    float len3= len(xxx-xx,yyy-yy);
    //Heron's formula
    float a= (len1+len2+len3)/2.0;
    float b= (a*(a-len1)*(a-len2)*(a-len3));
    if (b<=0)
        cout <<"Invalid Triangle!";
    else
        cout <<"The Area of The Triangle is: "<<sqrt(b);
    return 0;
}
