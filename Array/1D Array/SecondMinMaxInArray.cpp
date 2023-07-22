#include<bits/stdc++.h>
using namespace std;

/*https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=adityajoshi&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1*/

//optimal

int findSecondLarge(vector<int> &a,int n)
{
    int max=a[0];
    int smax=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>smax)
        {
            smax=a[i];
        }
    }

    return smax;
}

int findSecondSmall(vector<int> &a,int n)
{
    int min=a[0];
    int smin=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            smin=min;
            min=a[i];
        }

        else if(a[i]>min && a[i]<smin)
        {
            smin=a[i];
        }
    }

    return smin;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
   int secondLarge=findSecondLarge(a,n);
   int secondSmall=findSecondSmall(a,n);

   return {secondLarge,secondSmall};
}
