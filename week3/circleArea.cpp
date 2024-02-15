//wite a c++ prgm with a header file(.h) that computes area of the circle
#include<iostream>
#ifndef pi
#define pi 3.14
#endif
#include "circle.h"
int main()
{
    float radius;
    cout<<"Enter radius:"<<endl;
    cin>>radius;
    circle(radius);
}
