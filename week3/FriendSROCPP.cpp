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
    inline void displayWelcomeMessage(){
        cout<<"HELLO FOLKS!!"<<endl;
    }
class Box
{
private:
float length;
float width;
float height;
public:

    void boxArea(float length, float width,float height){
        cout<<"Area of box is "<<2*((length*width)+(width*height)+(height*length))<<endl;
    }
    void boxVolume(float length, float width, float height)
    friend void displayBoxDimensions(BOx d);
};
//member function
voidBOX :: boxVolume(float length, float width, float height){
    cout<<"Enter length:"<<endl;
    cin>>length;
    cout<<"Enter width:"<<endl;
    cin>>width;
    cout<<"Enter height:"<<endl;
    cin>>height;
    cout<<"Volume of box is "<<(length*width*height)<<endl;
}
//friend function
void displayBoxDimensions(Box d)
{
    cout<<"Dimensions of the box are "<<(d.length"X"d.width"X"d.height)<<endl;
}
int main()
{
    Box b;
    b.boxArea(float length, float width, float height);
    b.boxvolume(float length, float width, float height);
    displayWelcomeMessage();
    displayBoxDimensions(b);   
}
