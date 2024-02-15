/*1. boxArea.h - void boxArea(float length, float width,float height).*/
#include<iostream>
#include<string>
using namespace std;
void boxArea(float length,float width,float height)
{
    cout<<"Area of box is "<<2*((length*width)+(width*height)+(height*length))<<endl;
}
