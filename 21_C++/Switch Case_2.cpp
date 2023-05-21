#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char char_value;
    cout<<"Insert an alphabet: ";
    cin>>char_value;
    switch (char_value)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";
        break;
    }
    return 0;
}
