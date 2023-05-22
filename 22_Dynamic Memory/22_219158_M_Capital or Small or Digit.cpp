#include<bits/stdc++.h>
using namespace std;
int main()
{
    char char_value = 0;
    cin>>char_value;
    if (char_value >= 48 && char_value <= 57)
    {
        cout<<"IS DIGIT\n";
    }
    else if (char_value >= 65 && char_value <= 90 || char_value >= 97 && char_value <= 122)
    {
        cout<<"ALPHA\n";
        if (char_value >= 97 && char_value <= 122)
        {
            cout<<"IS SMALL\n";
        }
        else
        {
            cout<<"IS CAPITAL\n";
        }
    }
    return 0;
}