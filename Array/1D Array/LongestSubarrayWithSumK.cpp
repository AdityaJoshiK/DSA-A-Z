#include<bits/stdc++.h>
using namespace std;

//Better Approach(Positive+Negtive both numbers in array)

/*https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1*/

int longestSubarrayWithSumK(vector<int> a, long long k) {
    //only for positive
    map<long long,int> preSumMap;

    long long sum=0;
    int maxLen=0;

    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];

        if(sum==k)
        {
            maxLen=max(maxLen,i+1);
        }

        long long rem=sum-k;

        if(preSumMap.find(rem)!=preSumMap.end())
        {
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }

        if(preSumMap.find(sum)==preSumMap.end())
        preSumMap[sum]=i;
    }

    return maxLen;
}


//Optimal (Only For Positive)

/*https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1*/

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    //only for positive,zeros
    int left=0;
    int right=0;
    int n=a.size();

    int maxLen=0;

    long long sum=a[0];

    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }

        
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }

        right++;
    
        if(right<n)
        {
             sum+=a[right];
        }

    }
    
    return maxLen;
}