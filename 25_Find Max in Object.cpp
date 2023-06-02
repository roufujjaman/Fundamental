#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int mark;
};
int main()
{
    int count;
    cin >> count;
    Student arr[count];
    for( int i = 0; i < count; i++ )
    {
        cin >> arr[i].name;
        cin >> arr[i].mark;
    }
    Student max;
    max.mark = INT_MIN;
    for ( int i = 0; i < count; i++ )
    {
        if( arr[i].mark > max.mark )
        {
            max = arr[i];
        }
    }
    cout << max.name << ' ' << max.mark;
    return 0;
}