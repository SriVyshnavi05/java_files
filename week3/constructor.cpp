#include<iostream>
using namespace std;

class Student
{
    public:
        Student()
        {
            string collegeName = "MVGR";
            int collegeCode=050;
            cout<<"CollegeName : "<<collegeName<<endl;
            cout<<"CollegeCode: "<<collegeCode<<endl;
        }
        Student(string fullName, double semPerentage)
        {
            cout<<"FullName : "<<fullName<<endl;
            cout<<"SemPercentage : "<<semPerentage<<endl;
        }
        ~Student(){
         cout<<"I'M GONE!!!!"<<endl; 
        }
};
int main()
{
    Student SRI VYSHNAVI;
    string name;
    float val;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your sem percentage : ";
    cin>>val;
    Student SriVyshnai05(name,val);
    return 0;
}
