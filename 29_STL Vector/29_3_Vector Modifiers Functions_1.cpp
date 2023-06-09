#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> varr = {10, 20 , 30, 40}; // O(N)
    varr.push_back(50); // add an ele. at the back - O(N)
    varr.push_back(6);

    varr.pop_back(); // remove last ele.

    varr.insert(varr.end(), {60, 70, 80}); // O(N + K)
    
    vector<int> varrTemp = {90, 100, 10000, 999 }; // O(N)
    
    varr.insert(varr.end(), varrTemp.begin(), varrTemp.end());

    varr.erase( varr.end() - 2, varr.end() ); // O(N+K)
    for( int ri:varr ) // O(N)
    {
        cout << ri << ' ';
    }
    return 0;
}