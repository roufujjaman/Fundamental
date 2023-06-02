#include<bits/stdc++.h>
using namespace std;
int equation(int x, int n)
{
    int accm = 0;
    if( n == 2)
    {
        return accm;
    }
    else
    {
        equation(x, n - 1);
        accm += x * n;
        return accm;
    }
}
int main()
{
    int res = equation(5, 5);
    cout << res;
    return 0;
}
