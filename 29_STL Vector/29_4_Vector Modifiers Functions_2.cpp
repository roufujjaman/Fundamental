#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> varr = {1, 2, 2, 3, 4, 5, 6, 7, 8, 2 , 4};
    replace(varr.begin(), varr.end(), 2, 100); // O(N)
    for( int ri:varr )
    {
        cout << ri << ' ';
    }

    auto it = find(varr.begin(), varr.end(), 100); // O(N)
    if ( it == varr.end() ) cout << "NOT FOUND";
    else cout << "FOUND";
    return 0;
}