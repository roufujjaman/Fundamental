#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str_inpt;
    getline( cin, str_inpt );
    stringstream str_stream( str_inpt );
    string word;
    while ( str_stream >> word )
    {
        for ( int i = 0, j = word.length() - 1; i < j; i++, j-- )
        {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }
        if( str_stream.eof()) cout << word;
        else cout << word << ' ';
    }   
    return 0;
}