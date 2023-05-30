#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;

        Person( string name, int age )
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Person * person_one = new Person( "Sakib Al Hasan", 35 );
    Person * person_two = new Person( "Mashrafi Bin Mortoza", 40 );

    // person_one->name = person_two->name;
    // person_one->age = person_two->age;

    //copy data pointer to pointer
    *person_one = *person_two;
    
    delete person_two;
    cout << person_one->name << " " << person_one->age;
    return 0;
}