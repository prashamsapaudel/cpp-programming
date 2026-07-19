#include <iostream>
using namespace std;

class animal {
public:
    virtual void eat(){
        cout<<"the animal is eating"<<endl;
    }
};
class dog:public animal{
public:
    void bark(){
        cout<<"the dog is barking"<<endl;
    }
};
class cat : public animal {
public:
    void meow(){
        cout<<"the cat meows"<<endl;
    }
};
int main(){
    animal *a;
    dog d;
    cat c;

    a=&d;
    a->bark();
    a=&c;
    a->meow();
    return 0;
}