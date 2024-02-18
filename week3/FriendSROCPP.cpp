/*Write a C++ class 'Box' and its members as the following :
* void boxArea(float length, float width) : as a member function defiend inside class
* void boxVolume(float length, float width, float height) : as a member function defined oustide class
* void displayBoxDimensions() : as a friend function
* void displayWelcomeMessage() : as an inline function
Note: Take the input from the user*/
#include<iostream>
using namespace std;

inline void displayWelcomeMessage()
{
    cout<<"Hello, folks!!"<<endl;
}

class Box
{
    private:
        float length;
        float width;
        float height;
    public:
        void boxArea(float length,float width,float height)
        {
            cout<<"Area of box is "<<2*((length*width)+(width*height)+(height*length))<<endl;
        }
        void boxVolume(float length,float width,float height);
        void set_displayBoxDimensions(float l,float w,float h)
        {
            length=l;
            width=w;
            height=h;
        }
        friend void displayBoxDimensions(Box d);
};
void displayBoxDimensions(Box d)
{
    cout<<"Dimensions of the box are "<<"("<<d.length<<" , "<<d.width<<" , "<<d.height<<")"<<endl;
}
void Box::boxVolume(float length,float width,float height)
{
    cout<<"Volume of box is "<<(length*width*height)<<endl;
}
int main()
{
    Box b;
    float length,width,height;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    cout<<"Enter width:"<<endl;
    cin>>width;
    cout<<"Enter height:"<<endl;
    cin>>height;
    b.set_displayBoxDimensions(length,width,height);
    displayWelcomeMessage();
    displayBoxDimensions(b);
    b.boxArea(length,width,height);
    b.boxVolume(length,width,height);
    return 0;
}
