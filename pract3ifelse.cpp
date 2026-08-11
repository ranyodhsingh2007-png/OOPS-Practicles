#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int urn;
    string clas;
    float marks;
};

int main() {
    Student s;
    char g;

    cout << "Enter name : ";
    cin >> s.name;

    cout << "Enter URN : ";
    cin >> s.urn;

    cout << "Enter Class : ";
    cin >> s.clas;

    cout << "Enter marks : ";
    cin >> s.marks;

    if (s.marks >= 90 && s.marks <= 100) {
        g = 'A';
    }
    else if (s.marks >= 60 && s.marks < 90) {
        g = 'B';
    }
    else if (s.marks >= 40 && s.marks < 60) {
        g = 'C';
    }
    else {
        g = 'E';
    }

    cout << "-----Student Detail-----" << endl;
    cout << "Name : " << s.name << endl;
    cout << "URN  : " << s.urn << endl;
    cout << "Class : " << s.clas << endl;
    cout << "Marks : " << s.marks << endl;
    cout << "Grade : " << g << endl;

    return 0;
}