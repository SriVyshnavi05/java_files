/*Write a C++ class 'Box' and its members as the following :
* void boxArea(float length, float width) : as a member function defiend inside class
* void boxVolume(float length, float width, float height) : as a member function defined oustide class
* void displayBoxDimensions() : as a friend function
* void displayWelcomeMessage() : as an inline function
Note: Take the input from the user*/
#include<iostream>
using namespace std;
class Box {
    //inline function
    inline displayWelcomeMessage(){
        cout<<"HELLO FOLKS!!"<<endl;
    }
    //member function
    void boxArea(float length, float width,float height){
        cout<<"Area of box is "<<2*((length*width)+(width*height)+(height*length))<<endl;
    }
    //non member function
    void boxVolume(float length, float width, float height)
    //friend function
    void displayBoxDimensions()
};
//non member function
void boxVolume(float length, float width, float height){
    cout<<"Enter length:"<<endl;
    cin>>length;
    cout<<"Enter width:"<<endl;
    cin>>width;
    cout<<"Enter height:"<<endl;
    cin>>height;
    cout<<"Volume of box is "<<(length*width*height)<<endl;
}
//friend function
void displayBoxDimensions()
{
    cout<<"Dimensions of the box are "<<(length,width,height)<<endl;
}
int main()
{
    Box obj;
    inline displayWelcomeMessage();
    void displayBoxDimensions();
}
