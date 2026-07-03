#include<iostream>
using namespace std;
class calc
{
    public :
    int a,b;

    void input () {
        cout<<"enter number for a :";
        cin>>a;
        cout<<"enter number for b :";
        cin>>b;
    }
    void add () {
        cout<<"addition = "<<(a+b)<<endl;
    }
    void sub () {
        cout<<"subtraction = "<<(a-b)<<endl;
    }
};

int main () {
    calc c;

    c.input();
    c.add();
    c.sub();

    return 0;
}