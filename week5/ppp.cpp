//c++ prgrm to access public,pvt,protected members of a parent class using pubulic simple inheritance
// C++ program to demonstrate the working of public inheritance
#include <iostream>
using namespace std;

class student {
  private:
    double semper = 91.2;
  protected:
    int num = 53;
    void stdnum(){
          cout<<"My num is "<<num<<"(protected)"<<endl;
        }
  public:
    string name = "Vyshnavi";
    void studname(){
      cout<<"My name is "<<name<<" (public)."<<endl;
    }
// function to access private member
    double getPVT() {
      cout<<"My percentage is "<<semper<<" (private)."<<endl;
      return semper;
    }
};
class child : public student {
  public:
    // function to access protected member from Base
    int getProt() {
        cout<<"My num is "<<num<<" (protected)."<<endl;
        return num;
    }
};
int main() {
  child object1;
  object1.studname();
  object1.getProt();
  object1.getPVT();
  return 0;
}
