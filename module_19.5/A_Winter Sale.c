//          A. WInter Sale
//          https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <stdio.h>
int main() {
    float discount, price_after_discount;
    scanf("%f %f", &discount, &price_after_discount);
    float original_price = (100 / (100 - discount) * price_after_discount);
    printf("%0.2f", original_price);
    return 0;
}