#include <iostream>
using namespace std;

class student {
public:
    string name = "prashamsa";
protected :
    double gpa = 3.60;
private :
    string password = "pass123";
};
class csit : public student {
public :
    void studentinfo(){
        cout<<"name is "<<name<<endl;
        cout<<"cgpa is "<<gpa<<endl;
    }
};
int main (){
    csit c;
    c.studentinfo();
    cout<<"name is"<<c.name<<endl;
    return 0;
}