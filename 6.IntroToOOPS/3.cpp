#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void showData() {
        cout << "Name: " << name << "\nAge: " << age << "\n";
    }
};

class Student : public Person {
public:
    string course;
    void setCourse(string c) { course = c; }
    void showCourse() { cout << "Course: " << course << "\n"; }
};

class Teacher : public Person {
public:
    string subject;
    void setSubject(string s) { subject = s; }
    void showSubject() { cout << "Subject: " << subject << "\n"; }
};

main() {
    Student s;
    s.setData("Alice", 20);
    s.setCourse("Computer Science");
    s.showData();
    s.showCourse();

    Teacher t;
    t.setData("Mr. Bob", 45);
    t.setSubject("Mathematics");
    t.showData();
    t.showSubject();
}
