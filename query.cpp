#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for( int i = 0; i < count; i++ )
    {
        string str, find;
        cin >> str >> find;
        int find_len = find.length();
        int str_len = str.length();
        int index = 0;
        char res_str[1000];
        for( int j = 0; j < str_len; j++, index++)
        {
            bool found = false;
            if( str[j] == find[0] )
            {
                for( int k = 1; k < find_len; k++ )
                {
                    if( str[ j + k] == find[k] )
                    {
                        if ( found == false )
                        {
                            found = true;
                        }
                        continue;
                    }
                    else{
                        found = false;
                        break;
                    }
                }
            }
            if ( found )
            {
                res_str[index] = '$';
                found = false;
                j += find_len - 1;
            }
            else
            {
                res_str[index] = str[j];
            }
        }
        res_str[index] = '\0';
        cout << res_str << endl;
    }
    return 0;
}