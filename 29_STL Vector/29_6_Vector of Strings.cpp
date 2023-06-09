#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    cin.ignore();
    vector<string> varr(count);
    for( int i = 0; i < count; i++ )
    {
        getline(cin, varr[i]);
    }
    for( string val: varr)
    {
        cout << val << ' ';
    }
    return 0;
}