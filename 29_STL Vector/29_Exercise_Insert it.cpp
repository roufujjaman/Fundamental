#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int count_arr;
    cin >> count_arr;
    count += count_arr;
    vector<int> varr_one(count_arr);
    for( int i = 0; i < count_arr; i++)
    {
        cin >> varr_one[i];
    }
    cin >> count_arr;
    count += count_arr;
    vector<int> varr_two(count_arr);
    for( int i = 0; i < count_arr; i++)
    {
        cin >> varr_two[i];
    }
    int pos;
    cin >> pos;
    varr_one.insert(varr_one.begin() + pos, varr_two.begin(), varr_two.end());
    for( int i = 0; i < count; i++)
    {
        cout << varr_one[i] << ' ';
    }
    return 0;
}
