#include<bits/stdc++.h>
using namespace std;

int main()
{

    int xor1=0;

    int a[4]={1,2,4,5};

    for(int i=1;i<=5;i++)
    {
        cout<<xor1<<"^"<<i<<"="<<(xor1^i)<<endl;
        xor1=xor1^i;
    }

    cout<<endl;
    int xor2=0;

    for(int i=0;i<=3;i++)
    {
        cout<<xor2<<"^"<<a[i]<<"="<<(xor2^a[i])<<endl;
        xor2=xor2^a[i];
    }

    cout<<endl<<(xor1^xor2);
    return 0;

}