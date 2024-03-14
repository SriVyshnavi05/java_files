#include<iostream>
using namespace std;
class Addition{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    Addition obj;
    int a,b,c;
    cout<<"Enter values:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"sum of two numbers is "<<obj.add(a,b)<<endl;
    cout<<"sum of three numbers is "<<obj.add(a,b,c)<<endl;

}
