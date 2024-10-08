#include <iostream>
using namespace std;
class Person{
    public:
    char name[50];
    int age;
};
class Medals{
    public:
    int medals;
    char sportsname[50];
};
class Student: private Person,Medals{
    public:
    void setter(){
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter age "<<endl;
        cin>>age;
         cout<<"enter sport name "<<endl;
        cin>>sportsname;
        cout<<"enter medal"<<endl;
        cin>>medals;
    }
    void display(){
        cout<<"Student name is: "<<name<<endl;
        cout<<"Student age is: "<<age<<endl;
        cout<<"sport is: "<<sportsname<<endl;
        cout<<"medals are: "<<medals<<endl;

    }

};
int main(){
    Student st;
    st.setter();
    st.display();
}
