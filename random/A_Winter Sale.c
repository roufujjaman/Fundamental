//          A. WInter Sale
//          https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <stdio.h>
int main() {
    float discount, price;
    scanf("%f %f", &discount, &price);
    printf("%.2f", (100 / (100 - discount) * price));
    return 0;
}