#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float cgpa;
    vector<string> courses;

public:
    Student(string n, int r, float c) {
        name = n;
        rollNumber = r;
        cgpa = (c >= 0.0 && c <= 4.0) ? c : 0.0;
    }

    void addCourse(string course) {
        courses.push_back(course);
    }

    void updateCGPA(float newCgpa) {
        if (newCgpa >= 0.0 && newCgpa <= 4.0)
            cgpa = newCgpa;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Courses: ";
        for (string course : courses) {
            cout << course << " ";
        }
        cout << endl;
    }
};

int main() {
    Student s("Madhavan", 1001, 3.4);
    s.addCourse("Math");
    s.addCourse("Physics");
    s.updateCGPA(3.6);
    s.display();

    return 0;
}
