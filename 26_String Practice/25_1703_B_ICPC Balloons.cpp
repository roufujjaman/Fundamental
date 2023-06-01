#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for( int i = 0; i < test_case; i++)
    {
        int problems[26] = {0}; 
        fill(problems, problems + 26, 1);
        int n;
        cin >> n;
        string solved; // CODEFORCES
        cin >> solved;
        int point = 0;
        for( int j = 0; j < n; j++)
        {
            int index = solved[j] - 'A';
            if( problems[index] == 0 )
            {
                problems[index]++;
                point += 2;
            }
            else
            {
                point += 1;
            }
        }
        cout << point << endl;
    }
    return 0;
}