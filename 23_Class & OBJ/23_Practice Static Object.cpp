#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int class_enrolled;

        Student(char * n, int r, char s, int mm, int ce)
        {
            strcpy(name, n);
            roll = r;
            section = s;
            math_marks = mm;
            class_enrolled = ce;
        }
};
int main()
{
    Student student_one("Roufujjaman", 4010, 'A', 93, 13);
    Student student_two("Umme", 3010, 'A', 96, 13);
    Student student_three("Ruhul", 1010, 'A', 40, 13);

    if (student_one.math_marks > student_two.math_marks && student_one.math_marks > student_three.math_marks)
    {
        cout << student_one.name << ":\t" << student_one.math_marks;
    }
    else if (student_two.math_marks > student_one.math_marks && student_two.math_marks > student_three.math_marks)
    {
        cout << student_two.name << ":\t" <<student_two.math_marks;
    }
    else 
    {
        cout << student_three.name << ":\t" << student_three.math_marks;
    }
    return 0;
}