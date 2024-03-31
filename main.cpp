#include <iostream>

using namespace std;

int main() {
    int num_students, total_students_passed = 0, total_students_grade_a = 0;
    string name, student_id, grade;

    cout << "Enter the total number of students enrolled: ";
    cin >> num_students;

    for (int i = 0; i < num_students; ++i)
    {
        int assignments, cats, exam;
        cout << "\n\nStudent " << i + 1 << ":\n";
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's ID: ";
        cin >> student_id;
        cout << "Enter marks for assignments: ";
        cin >> assignments;
        cout << "Enter marks for CATs: ";
        cin >> cats;
        cout << "Enter marks for final examination: ";
        cin >> exam;

        // Calculate total mark
        double total_mark = (assignments * 0.1) + (cats * 0.2) + (exam * 0.7);

        // Check if total_mark is less than 40
        if (total_mark == 39) {
            total_mark = 40;
            grade = "D";
        } else if (total_mark >= 70) {
            grade = "A";
            total_students_grade_a++;
        } else if (total_mark >= 60) {
            grade = "B";
        } else if (total_mark >= 50) {
            grade = "C";
        } else {
            grade = "D";
        }

        // Output student's details
        cout <<"\nName: " << name << ", Student ID: " << student_id << ", Total Mark: " << total_mark << ", Grade: " << grade << endl;

        // Check if the student passed
        if (total_mark >= 40) {
            total_students_passed++;
        }
    }

    // Output total number of passing students and students with grade A
    cout << "\n\nTotal number of passing students: " << total_students_passed << endl;
    cout << "Total number of students with grade A: " << total_students_grade_a << endl;

    return 0;
}
