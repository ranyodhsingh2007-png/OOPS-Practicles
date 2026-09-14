#include<iostream>
using namespace std;
class Sum{
    public:
    int a,b;
    int sum(){
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter 2nd number: ";
        cin>>b;
        cout<<"Sum: ";
        return a+b;
    }
    void display(){
        cout<<sum();
    }
};
int main(){
    Sum s;
    cout<<"Name : Ranyodh Singh"<<endl;
    cout<<"Class: CSE"<<endl;
    cout<<"URN  : 2514166"<<endl;
    s.display();
    return 0;
}