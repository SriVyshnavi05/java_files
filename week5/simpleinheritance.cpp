#include<iostream>
using namespace std;
class Space {
    public:
    void Sun(){
        cout<<"I appear during day time."<<endl;
    }
    void Moon(){
        cout<<"I appear during night time."<<endl;
    }
};
class SolarSystem : public Space {
    public:
    void Earth(){
        cout<<"I'm the only planet with life!"<<endl;
    }
    void Jupiter(){
        cout<<"I'm having 8 moons."<<endl;
    }
};
int main()
{
    SolarSystem obj;
    obj.Sun();
    obj.Moon();
    obj.Earth();
    obj.Jupiter();
}
