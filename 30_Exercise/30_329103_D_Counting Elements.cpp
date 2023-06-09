#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    vector<int> varr(count);
    for( int i = 0; i < count; i++ ) //O(N)
    {
        cin >> varr[i];
    }
    int count_ele = 0;
    for( int val_one: varr )  // O(N * N)
    {
        for( int val_two: varr)
        {
            if( val_one + 1 == val_two )
            {
                count_ele++;
                break; // if matches loop should  break else it will keep adding
            }
        }
    }
    cout << count_ele << endl;
    return 0;
}