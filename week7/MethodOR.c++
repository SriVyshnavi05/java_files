#include<iostream>
using namespace std;
class Addition{
    public:
    void add(int a,int b)
    {
        cout<<(a+b)<<endl;
    }
    void add(double a,double b)
    {
        cout<<(a+b)<<endl;
    }
};
int main()
{
        Addition obj;
        obj.add(2,3);
        obj.add(2.3,3.2);
}
