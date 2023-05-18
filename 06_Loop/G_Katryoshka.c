//              G. Katryoshka
//              https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include<stdio.h>

int main()
{
    long long int eyeN, mouthN, bodyN, count;
    long long int countSouvenier=0;
    scanf("%lld %lld %lld", &eyeN, &mouthN, &bodyN);
        
    if (eyeN <= mouthN && eyeN <= bodyN)
    {
        mouthN -= eyeN;
        bodyN -= eyeN;
        countSouvenier += eyeN;
    }
    else if (mouthN <= eyeN && mouthN <= bodyN)
    {
        eyeN -= mouthN;
        bodyN -= mouthN;
        countSouvenier += mouthN;
        
        if (eyeN / 2 <= bodyN)
        {
            countSouvenier += eyeN / 2;
            eyeN -= eyeN / 2;
            bodyN -= bodyN;
        }
        else
        {
            countSouvenier += bodyN;
            bodyN -= bodyN;
            eyeN -= bodyN * 2;
        }   
    }
    else if (bodyN <= eyeN && bodyN <= eyeN)
    {
        mouthN -= bodyN;
        eyeN -= bodyN;
        countSouvenier += bodyN;
    }
    printf("%lld", countSouvenier);
    return 0;
}
