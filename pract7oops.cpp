#include <iostream>
using namespace std;

class Student {
public:

    class Name {
    public:
        int n;
        string a[100];

        void insert() {
            cout << "Enter number of students: ";
            cin >> n;

            cout << "Enter names:" << endl;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
        }

        
    };

    class age {
    public:
        int b[100];

        void insert2(int n) {
            cout << "Enter their age:" << endl;

            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }
        }
    };
};

int main() {
    Student::Name o1;
    Student::age o2;
    cout<<"-----------------"<<endl;
    cout<<"Name : Ranyodh Singh"<<endl;
    cout<<"Class: CSE-E1"<<endl;
    cout<<"URN  : 2514166"<<endl;
    cout<<"-----------------"<<endl;

    o1.insert();
    o2.insert2(o1.n);
    cout<<"Data:"<<endl;
    for(int i=0;i<o1.n;i++){
        cout<<"Name: "<<o1.a[i]<<"  Age: "<<o2.b[i]<<endl;
    }

    return 0;
}
