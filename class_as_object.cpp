#include <iostream>
using namespace std;
class Marks{
    private:
    
    int marks;
    public:
    int roll;
    void set_marks(int r, int m){
       
        roll = r;
        marks = m;
    }
    void get_marks(){
        cout<<"Roll number of student is: "<<roll<<endl;
       
        cout<<"Marks of student is: "<<marks<<endl;
    }


};
class Students{
    string name;
    public:
    Marks m1;
    void set_name(string n){
        name = n;
    }
    void get_name(){
        cout<<"Name of the student is : "<<name<<endl;
    }
    void get_info(){
        cout<< "Name of the student is "<<name<<endl;
        m1.get_marks();
    }
};
int main(){
    Students s1;
    s1.set_name("Himanshi Sharma");
    s1.m1.set_marks(1, 99);
    s1.get_info();
}
