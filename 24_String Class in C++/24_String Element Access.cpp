#include<bits/stdc++.h>
using namespace std;
int main()
{
    string my_str;
    cin >> my_str;
    cout << my_str[0] << endl;
    cout << my_str.at(0) << endl;
    cout << my_str.front() << endl;

    cout << my_str[my_str.size() - 1] << endl;
    cout << my_str.back() << endl;
    return 0;
}