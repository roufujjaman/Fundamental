#include<bits/stdc++.h>
using namespace std;
class Pen
{
    public:
        string name;
        int price;
};
bool cpm(Pen a, Pen b)
{
    if( a.price < b.price ) return true;
    else return false;
}
int main()
{
    int count;
    cin >> count;
    Pen arr[count];
    for( int i = 0; i < count; i++ )
    {
        cin >> arr[i].name;
        cin >> arr[i].price;
    }
    
    //built in sort() on price smaller < bigger 
    sort(arr, arr+count, cpm);

    for( int i = 0; i < count; i++ )
    {
        cout << arr[i].name << ' ';
        cout << arr[i].price << endl;
    }
    return 0;
}