#include<iostream>
#include<string>
using namespace std;
// Base class
class parent {
  public: 
    string name = "KRISHNA";
};
// Derived class
class child: public parent {
  public: 
    string daughter = "VYSHNAVI";
};

int main() {
  child mychild;
  cout<<mychild.name<<":I'm "<<mychild.daughter<<"'s father."<<endl;
  return 0;
}
