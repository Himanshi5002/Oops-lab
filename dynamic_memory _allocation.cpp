#include <iostream>
using namespace std;
class Complex{
    int a; int b;
    public:
    void set_values(int a , int b){
        this->a = a;
        this->b = b;
    }
    void get_values(){
        cout<<"this part is real"<<a<<endl;
        cout<<"this part is imaginary"<<b<<endl;
    }
};
int main(){
    //Complex c1;
    //c1.set_values(7,8);
    //c1.get_values();
    Complex*ptr = new Complex;    //NEW KEYWORD
    ptr-> set_values(1,2);
    ptr->get_values();
   // Complex*arr = new Complex[4];
   // arr-> set_values(3,5);
   // arr->get_values();
}
