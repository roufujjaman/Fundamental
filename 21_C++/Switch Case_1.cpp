#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int number;
    cout<<"Insert Number: ";
    cin>>number;
    switch (number / 10)
    {
    case 9:
    case 10:
        cout<<"A\tExcelent";
        break;
    case 8:
        cout<<"B\tGood";
        break;
    case 7:
        cout<<"C\tAvrage";
        break;
    case 6:
        cout<<"D\tPoor";
        break;
    default:
        cout<<"F\tFailure";
        break;
    }
    return 0;
}