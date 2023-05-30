#include<bits/stdc++.h>
using namespace std;
void print( stringstream & str_stream )
{
    string str;
    if( str_stream >> str )
    {
        print( str_stream );
        cout << str << endl;
    }
}
int main()
{
    string str;
    getline( cin, str );
    stringstream str_stream( str );
    print( str_stream );
    return 0;
}