//Simple code to show the working of default constructor
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int urn;
    string clas;
    Student(){
        name="Ranyodh";
        urn=166;
        clas="CSE";}

        void display(){
            cout<<"----Student Details----"<<endl;
            cout<<"Name  : "<<name<<endl;
            cout<<"URN   : "<<urn<<endl;
            cout<<"Class : "<<clas<<endl;
            cout<<"-----------------------"<<endl;
        }
    };
int main(){
    Student s;
    s.display();
    return 0;
}