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
class csit : protected student {
public :
    void studentinfo(){
        cout<<"name is "<<name<<endl;
        cout<<"cgpa is "<<gpa<<endl;
    }
};
int main (){
    csit c;
    c.studentinfo();
    return 0;
}