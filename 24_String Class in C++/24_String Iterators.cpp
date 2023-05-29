#include<bits/stdc++.h>
using namespace std;
int main()
{
    string my_str;
    string:: iterator it;
    cin >> my_str;
    //for (auto it = my_str.begin(); it < my_str.end(); it++) { };
    for (it = my_str.begin(); it < my_str.end(); it++ )
    {
        cout << *it << endl;
    }
    return 0;
}