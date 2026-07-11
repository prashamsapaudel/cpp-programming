#include <iostream>
using namespace std;

class teacher {
public:
    void teachername (){
        cout<<"the teacher is ram"<<endl;
    }
};
class student {
public:
    void studentname (){
        cout<<"the student is shyam"<<endl;
    }
};
class result : public teacher , public student {
public:
    void marks(){
        cout<<"the marks is 90"<<endl;
    }
};
int main(){
    result r;
    r.teachername();
    r.studentname();
    r.marks();
    return 0;
}