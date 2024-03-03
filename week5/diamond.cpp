#include<iostream>
using namespace std;
class mainclass
{
public:
void aClass()
{
cout<<"I am a mainclass\n";
}
};
class subclass1: public mainclass
{
public:
void bClass()
{
cout<<"I am a subclass1\n";
}
};
class subclass2: public mainclass
{
public:
void cClass()
{
cout<<"I am asubclass2\n";
}
};
class subclass3: public subclass2,public subclass1
{
public:
void dClass()
{
cout<<"I am a subclass3\n";
}
};
int main()
{
subclass3 obj1;
//obj1.aClass();
obj1.bClass();
obj1.cClass();
obj1.dClass();
return 0;
}
