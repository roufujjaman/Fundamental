#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (a + b == c && s == '+') cout << "Yes";
    else if (a - b == c && s == '-') cout << "Yes";
    else if (a * b == c && s == '*') cout << "Yes";
    else 
    {
        if(s == '+') cout << a + b;
        else if (s == '-') cout << a - b;
        else if (s == '*') cout << a * b;
    }
    return 0;
}


// 5 + 5 = 12
// 10

// 5 + 5 = 10
// Yes