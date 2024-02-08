#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter your choice:";
    int choice;
    cin>>choice;
    cout<<"1.Addition 2.Subtraction 3.Multiplication 4.Division"<<endl;
    cout<<"Enter two numbers a and b:"<<endl;
    float a,b;
    cin>>a;
    cin>>b;
    switch(choice)
    {
        case 1:
        cout<<"Addition of "<<a<< " and " <<b<< " is " <<a+b<<endl;
        break;
        case 2:
        cout<<"Subtraction of "<<a<< " and " <<b<< " is " <<a-b<<endl;
        break;
        case 3:
        cout<<"Multiplication of "<<a<< " and " <<b<< " is " <<a*b<<endl;
        break;
        case 4:
        cout<<"Division of "<<a<< " and " <<b<< " is " <<a/b<<endl;
        break;
        default:
        cout<<"Enter valid choice!!!"<<endl;
    }
}
