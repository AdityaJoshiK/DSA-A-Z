#include<bits/stdc++.h>
using namespace std;

void name(int i)
{
    if(i==5)
    {
        return;
    }

    cout<<"Aditya"<<i<<endl;
    name(i+1);
}

int main()
{
    int i=0;

    name(i);

    return 0;
}