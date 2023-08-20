#include<bits/stdc++.h>
using namespace std;

//Better Approch

/*https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPa nelTab=1*/

pair<int,int> read(int n, vector<int> book, int target)
{
    // Write your code here.
    map<int,int> mpp;

    for(int i=0;i<n;i++)
    {
        mpp[book[i]]=i;

        if(mpp.find(target-book[i])!=mpp.end())
        {
            return {mpp[target-book[i]],i};
        }
        
    }

    return {-1,-1};
}
