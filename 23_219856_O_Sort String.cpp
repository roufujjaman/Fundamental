#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[26] = {0};
    for (int i = 0; i < count; i++)
    {
        char alphabet_index;
        cin >> alphabet_index;
        alphabet_index -= 97;
        arr[alphabet_index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (arr[i] != 0)
        {
            cout << static_cast<char>(i + 97);
            arr[i]--;
        }
    }
    return 0;
}