//Simple code display student details using do while loops
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int urn;
    string clas;
};
int main(){
    Student s[3];
   
    int i=0;
    
   do{
       cout<<"Enter name  : ";
       cin>>s[i].name;
       cout<<"Enter URN   : ";
       cin>>s[i].urn;
       cout<<"Enter Class : ";
       cin>>s[i].clas;
       i++;}
       while(i<=2);
   i=0;
   do{
       cout<<"----STUDENT DETAIL----"<<endl;
        cout<<"Name  :"<<s[i].name<<endl;
        cout<<"URN   :"<<s[i].urn<<endl;
        cout<<"Class :"<<s[i].clas<<endl;
        cout<<"---------------------"<<endl;
        i=i+1;
   }while(i<=2);
   
   return 0;
}