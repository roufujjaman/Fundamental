#include<bits/stdc++.h>
using namespace std;
class Drinks
{
    public:
        string name;
        int price;
        int volume;
};
int main()
{
    int count;
    cin >> count;
    Drinks arr[count];
    for( int i = 0; i < count; i++ )
    {
        cin >> arr[i].name;
        cin >> arr[i].price;
        cin >> arr[i].volume;
    }

    for( int i = 0; i < count; i++ )
    {
        cout << arr[i].name << ' ';
        cout << '$' << arr[i].price << ' ';
        cout << arr[i].volume << endl;
    }
    return 0;
}

// 3
// 7up 25 250
// coke 25 250
// mojo 20 250