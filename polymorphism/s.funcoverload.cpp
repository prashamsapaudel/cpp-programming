#include <iostream>
using namespace std;

template <typename T>
T add (T a, T b){
    return a+b;
}
int main (){
    cout<<"sum of int is"<<add(5,5)<<endl;
    cout<<"sum of float is"<<add(5.5,6.5)<<endl;
    return 0;
}
