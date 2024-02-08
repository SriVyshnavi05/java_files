#include<iostream>
#include<string>
using namespace std;
void evenORodd(int n)
{
    if(n%2==0)
    {
        cout<<n<<" is a even number."<<endl;
    }
    else
    {
        cout<<n<<" is odd number."<<endl;
    }
}
int main()
{
    cout<<"enter a number:"<<endl;
    int n;
    cin>>n;
    evenORodd(n);
}
