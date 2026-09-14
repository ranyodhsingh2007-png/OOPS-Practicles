#include<iostream>
using namespace std;
class Quize{
    public:
    string a[100];
    int n;
    void enter1(){
        cout<<"Enter number of student participated in quize: ";
        cin>>n;
        cout<<"Enter students: "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
};
class Display:public Quize{
    public:
    Display(){
        enter1();
    }
    void display1(){
        cout<<"Students are:"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
};
int main(){
    Display d;
    d.display1();
    return 0;
}