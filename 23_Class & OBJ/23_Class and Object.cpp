#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int ID;
        char degree[50];
    
        //class constructor
        Student(char * n, int i, char * deg)
        {
            //not recommended
            strcpy(name, n);
            ID = i;
            //not recommended
            strcpy(degree, deg);
        }
};
int main()
{
    Student student_one("Roufujjaman", 1530004010, "B.Arch");
    
    // strcpy(student_one.name, "Roufujjaman");
    // student_one.id = 4010;
    // student_one.degree = "B.Arch";

    cout << student_one.name << endl;
    cout << student_one.ID << endl;
    cout << student_one.degree << endl;
    return 0;
}