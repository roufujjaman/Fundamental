#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str_inpt;
    cin >> str_inpt;
    int str_len = str_inpt.length();
    char egypt[6] = "EGYPT";
    bool found_egypt = false;
    for( int i = 0; i < str_len; i++ )
    {
        if( str_inpt[i] == 'E')//EGYPT sieze 5;
        {
            for( int j = i, K = 0; j < i + 5; j++, K++)
            {
                if( str_inpt[j] == egypt[K] )
                {
                    if ( found_egypt == false )
                    {
                        found_egypt = true;
                        continue;
                    }
                }
                else
                {
                    found_egypt = false;
                    break;
                }
            }
        }
        if( found_egypt ) {
            cout << " ";
            found_egypt = false;
            i+=4;
        }
        else
        {
            cout << str_inpt[i];
        }
    }
    return 0;
}