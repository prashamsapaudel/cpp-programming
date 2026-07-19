#include <iostream>
using namespace std;

class vehicle {
public:
    void start(){
        cout<<"the vehicle is started"<<endl;
    }
};
class car : public vehicle {
public:
    void drive(){
        cout<<"the car is driving"<<endl;
    }
};
class electric {
public:
    void charge(){
        cout<<"charging battery"<<endl;
    }
};
class electriccar : public electric, public car {
public :
    void boom(){
        cout<<"speed increases"<<endl;
    }
};
int main (){
    electriccar e;
    e.start();
    e.drive();
    e.charge();

    return 0;
}