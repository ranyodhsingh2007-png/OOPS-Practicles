#include<iostream>
using namespace std;
class Student{
    int n;
    int *p;
    public:
    Student(int x){
        n=x;
        p=new int[n];
    }
    void insert(){
        
        cout<<"Enter elements: "<<endl;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
    }
    void display(){
        cout<<"Elements are: "<<endl;
        for(int i=0;i<n;i++){
            cout<<p[i]<<endl;
        } 
    }
    ~Student(){
        delete[]p;
    }
};
int main(){
    cout<<"Name : Ranyodh Singh"<<endl;
    cout<<"Class: CSE-E1"<<endl;
    cout<<"URN  : 2514166"<<endl;
    int d;
    cout<<"Enter number of elements: ";
    cin>>d;
    Student s(d);
    s.insert();
    s.display();
    return 0;
}
