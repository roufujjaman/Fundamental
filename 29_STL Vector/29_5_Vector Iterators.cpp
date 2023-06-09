#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> varr = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it;
    for( it = varr.begin(); it < varr.end(); it++)
    {
        cout << *it << ' ';
    }
    return 0;
}