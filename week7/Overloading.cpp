#include<iostream>
using namespace std;
class Add{
    public:
    int a=0;
    int b=0;
    void sum()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
        cout<<"Enter b:"<<endl;
        cin>>b;
    }
    void operator+()
    {
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};
int main()
{
    Add obj;
    obj.sum();
    +obj;
}
