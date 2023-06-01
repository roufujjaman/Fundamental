#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str_input;
    getline( cin, str_input );
    int count = 0;
    bool in_group = false;
    for( char c:str_input )
    {
        if( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
        {
            if ( in_group == false )
            {
                in_group = true;
                count++;
            }
        }
        else in_group = false;
    }
    cout << count << endl;
    return 0;
}

//counting by grouping