#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input_str;
    getline(cin, input_str);
    stringstream strs;
    strs << input_str;
    string str;
    while (strs >> str )
    {
        cout << str << '\n';
    }
    
    cout << input_str;
}
