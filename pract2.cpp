//Simple program to show the details of students using for loops
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int urn;
    string clas;
};
int main(){
    Student s;
    s.name;
    s.urn;
    s.clas;
    int n;
    for(int i=1;i<=3;i++){
        cout<<"Enter name: ";
        cin>>s.name;
        cout<<"Enter URN: ";
        cin>>s.urn;
        cout<<"Enter class: ";
        cin>>s.clas;
        
    }
    for(int i=1;i<=3;i++){
        cout<<"Student Detail:-"<<endl;
        cout<<"Name  :"<<s.name<<endl;
        cout<<"URN   :"<<s.urn<<endl;
        cout<<"Class :"<<s.clas<<endl;
    }
    return 0;
}
