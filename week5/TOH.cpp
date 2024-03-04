#include<iostream>
using namespace std;
class ClassA
{
    public:
        void aClass()
        {
            cout<<"I am a Class A"<<endl;
        }
};
class ClassB
{
    public:
        void bClass()
        {
            cout<<"I am a Class B"<<endl;
        }
};
//Multiple Inheritance
class ClassC: public ClassA,public ClassB
{
    public:
        void cClass()
        {
            cout<<"I am a Class C"<<endl;
        }
};
//Simple Inheritance
class ClassD: public ClassA
{
    public:
        void dClass()
        {
            cout<<"I am a Class D"<<endl;
        }
};
//Hybrid Inheritance
class ClassE: public ClassC,public ClassD
{
    public:
        void eClass()
        {
            cout<<"I am a Class E"<<endl;
        }
};
//Multi-Level Inheritance
class ClassF: public ClassD
{
    public:
        void fClass()
        {
            cout<<"I am a Class F"<<endl;
        }
};
//Hierarichal Inheritance
class ClassG:public ClassA
{
    public:
        void gClass()
        {
            cout<<"I am a Class G"<<endl;
        }
};
class ClassH:public ClassA
{
    public:
        void hClass()
        {
            cout<<"I am a Class H"<<endl;
        }
};
int main()
{
    //Simple Inheritance
    cout<<"Simple Inheritance"<<endl;
    ClassD obj1;
    obj1.aClass();
    obj1.dClass();
    //Multiple Inheritance
    cout<<"Multiple Inheritance"<<endl;
    ClassC obj2;
    obj2.aClass();
    obj2.bClass();
    obj2.cClass();
    //Multi-Level Inheritance
    cout<<"Multi-Level Inheritance"<<endl;
    ClassF obj3;
    obj3.aClass();
    obj3.dClass();
    obj3.fClass();
    //Hierarichal Inheritance
    cout<<"Hierarichal Inheritance"<<endl;
    ClassG obj4;
    ClassH obj5;
    obj4.aClass();
    obj4.gClass();
    obj5.aClass();
    obj5.hClass();
    //Hybrid Inheritance
    cout<<"Hybrid Inheritance"<<endl;
    ClassE obj6;
    //obj6.aClass();
    //aClass() method becomes ambiguous here
    obj6.bClass();
    obj6.cClass();
    obj6.dClass();
    obj6.eClass();
    return 0;
}
