#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_count;
    cin >> test_count;
    for (int i = 0; i < test_count; i++)
    {
        int count;
        cin >> count;
        int arr[count];
        for (int j = 0; j < count; j++)
        {
            cin >> arr[j];
        }
        int min = INT_MAX;
        for (int k = 0; k < count - 1; k++)
        {
            for (int l = k + 1; l < count; l++)
            {
                int cal = arr[k] + arr[l] + (l + 1) - (k + 1);
                if (cal < min)
                {
                    min = cal;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}