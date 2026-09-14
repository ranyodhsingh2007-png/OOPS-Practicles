#include<iostream>
using namespace std;
class Multiply{
    public:
    int a;
    int b;
    int mul(int a,int b=20){
        cout<<"Multiplication of two numbers: ";
        return a*b;
    }
    void display(){
        cout<<"Enter number : ";
        cin>>a;
        cout<<mul(a);
    }
};
int main(){
    Multiply m;
    cout<<"Name : Ranyodh Singh"<<endl;
    cout<<"Class: CSE"<<endl;
    cout<<"URN  : 2514166"<<endl;
    m.display();
    return 0;
}