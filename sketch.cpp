#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
        int jursey_no;
        char country[100];
};
int main()
{
    char country[100] = "Bangladesh";
    Cricketer * mashrafi = new Cricketer;
    mashrafi->jursey_no = 10;
    strcpy(mashrafi->country, country);

    delete mashrafi;
    Cricketer * tamim = new Cricketer;
    tamim->jursey_no = mashrafi->jursey_no;
    strcpy(tamim->country, mashrafi->country);

    cout << tamim->jursey_no << endl;
    cout << tamim->country << endl;

    return 0;
}