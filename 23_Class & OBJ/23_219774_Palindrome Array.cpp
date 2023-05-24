#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    int palindrome = 1;
    for (int i = 0, j = count - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome) cout << "YES";
    else cout << "NO";
    return 0;
}