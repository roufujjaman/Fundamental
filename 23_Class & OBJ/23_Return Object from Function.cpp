#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:
        char engine[10];
        int door;
        char color[20];
        
        //class constructor
        Car(char * e, int d, char * c)
        {
            //not recommended
            strcpy(engine, e);
            door = d;
            //not recommended
            strcpy(color, c);
        }
};

Car fun()
{
    char engine[10] = "V8";
    char color[20] = "Black";
    Car car_two(engine, 4, color);

    return car_two;
}

int main()
{
    Car car_one("V6", 2, "Grey");
    cout << car_one.engine << endl;
    cout << car_one.door << endl;
    cout << car_one.color << endl;

    cout << endl;

    Car car_two = fun();

    cout << car_two.engine << endl;
    cout << car_two.door << endl;
    cout << car_two.color << endl;
    return 0;
}