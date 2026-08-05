//Simple code to print the detail of the student using classes and objects
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    string clas;
};
int main(){
    Student s;
    s.name;
    s.roll;
    s.clas;
    cout<<"Enter name : "<<endl;
    cin>>s.name;
    cout<<"Enter URN  :"<<endl;
    cin>>s.roll;
    cout<<"Enter Class:"<<endl;
    cin>>s.clas;
    cout<<"Student Detail: "<<endl;
    cout<<"Name  :"<<s.name<<endl;
    cout<<"Class :"<<s.clas<<endl;
    cout<<"URN   :"<<s.roll<<endl;
    return 0;

}
