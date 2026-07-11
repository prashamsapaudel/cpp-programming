#include <iostream>
using namespace std;

class grandpa {
public:
    void eyes(){
        cout<<"grandpas eye colour is blue"<<endl;
    }
};
class father : public grandpa {
public:
    void haircolour(){
        cout<<"fathers hair colour is blonde"<<endl;
    }
};
class son : public father {
public:
    void iq(){
        cout<<"son is intelligent"<<endl;
    }
};
int main(){
    son s;
    s.eyes();
    s.haircolour();
    s.iq();
}