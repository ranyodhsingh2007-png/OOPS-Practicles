#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int urn;
    string clas;
    Student(string a,int b,string c){
        name=a; urn=b;clas=c;}

        void display(){
            cout<<"----Student Details----"<<endl;
            cout<<"Name  : "<<name<<endl;
            cout<<"URN   : "<<urn<<endl;
            cout<<"Class : "<<clas<<endl;
            cout<<"-----------------------"<<endl;
        }
    };
int main(){
    
    Student s("Ranyodh",166,"CSE");
    s.display();
    return 0;
}