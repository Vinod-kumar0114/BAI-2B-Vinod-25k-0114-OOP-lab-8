#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double grades[3];

public:
    Student(string n, double g1, double g2, double g3) {
        name = n;
        grades[0] = g1;
        grades[1] = g2;
        grades[2] = g3;
    }

    void showGrades() {
        cout << name << "'s Grades: " << grades[0] << ", " << grades[1] << ", " << grades[2] << endl;
    }

    friend class Teacher;
    friend void calculateAverageGrade(Student s);
};

class Teacher {
public:
    void updateGrade(Student &s, int index, double newGrade) {
        if (index >= 0 && index < 3) {
            s.grades[index] = newGrade;
            cout << "Teacher updated grade at index " << index << " to " << newGrade << endl;
        }
    }
};

void calculateAverageGrade(Student s) {
    double avg = (s.grades[0] + s.grades[1] + s.grades[2]) / 3.0;
    cout << "Average Grade: " << avg << endl;
}

int main() {
    Student s1("Ali", 75, 80, 65);
    Teacher t1;

    s1.showGrades();
    calculateAverageGrade(s1);

    cout << "\nTeacher Intervenes:" << endl;
    t1.updateGrade(s1, 2, 90); 

    s1.showGrades();
    calculateAverageGrade(s1);

    return 0;
}