/*Using a constructor and destructor in C++, Write a C++ class 'Student' and assign the following :
* string fullName
* int rollNum
* double semPerentage
* string collegeName
* int collegeCode
*/
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"WELCOME FOLKS!!"<<endl;
    }
    Student(int admNum)
    {
        Num=admNum;
        cout<<"BE FOCUSED"<<endl;
    }
    string Name;
    int Num;
    double semPer;
    string colName;
    int colCode;
    void fullName()
    {
        cout<<Name<<" is my name."<<endl;
    }
    void rollNum(){
        cout<<Num<<" is my number."<<endl;
    }
    void semPerentage()
    {
        cout<<semPer<<" is my sem percentage."<<endl;
    }
    void collegeName()
    {
        cout<<colName<<" is my college name."<<endl;
    }
    void collegeCode()
    {
        cout<<colCode<<" is my college code."<<endl;
    }
    ~ Student()
    {
        cout<<"GOT IT!!"<<endl;
    }
};
int main()
{
    Student obj;
    cout<<"ENTER YOUR NAME:"<<endl;
    cin>>obj.Name;
    cout<<"ENTER YOUR NUM:"<<endl;
    cin>>obj.Num;
    cout<<"ENTER SEM PERCENTAGE:"<<endl;
    cin>>obj.semPer;
    cout<<"ENTER COLLEGE NAME:"<<endl;
    cin>>obj.colName;
    cout<<"ENTER COLLEGE CODE:"<<endl;
    cin>>obj.colCode;
    obj.fullName();
    obj.rollNum();
    obj.semPerentage();
    obj.collegeName();
    obj.collegeCode();
}
