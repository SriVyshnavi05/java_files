#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
//using endl
cout<<"My name is Sri Vyshnavi"<<endl;
//using ends cout<<"Hi"<<ends; cout<<endl;
//terminates by inserting null operator
//using ws 
string name;
getline(cin>>ws,name); cout<<name<<endl;
//removes whitespaces if they are present
//setw cout<<setw(6)<<"Hi\n";
//creates spaces provides in setw(n)
//setfill
cout<<setfill('^')<<setw(12)<<"Hi "<<name<<"\n";
//fills the space given by setw
//setprecision
double num=0.233423423424; 
cout<<setprecision(4)<<num<<endl;
//setprecision decides the values after the decimal points
//flush 
int a=10;
cout.flush();
cout<<"The value of a is "<<a; 
return 0;
}
