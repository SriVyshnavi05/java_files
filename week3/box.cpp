/*Write two header files in C++ as :
1. boxArea.h - void boxArea(float length, float width,float height).
2. boxVolume.h - void boxVolume(float length, float width, float height)
Also using #include, #ifdef and #ifndef write a C++ program to display area and volume of box with user input.
*/
#include<iostream>
#ifndef pi
#define pi 3.14
#endif
#include "boxarea.h"
#include "boxvolume.h"
using namespace std;
int main()
{
    float length;
    float width;
    float height;
    cout<<"Enter length:"<<endl;
    cin>>length;
    cout<<"Enter width:"<<endl;
    cin>>width;
    cout<<"Enter height:"<<endl;
    cin>>height;
    boxArea(length,width,height);
    boxVolume(length,width,height);
}
