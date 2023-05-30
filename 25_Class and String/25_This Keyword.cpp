#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;

        Person( string name, int age )
        {
            (*this).name = name;    //this->name = name;
            (*this).age = age;      //this->age = age;
        }
        void confirm()
        {
            cout << "Hello, " << name << ", Are you " << age << " years old.";
        }
};
int main()
{
    string name;
    int age;
    cin >> name;
    cin >> age;
    Person person_one(name, age);
    person_one.confirm();
    return 0;
}