#include<bits/stdc++.h>
using namespace std;

//optiml 1 Using Sum
/*https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1*/
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=(n*(n+1))/2;
        
        int finalsum=0;
        
        for(int i=0;i<n-1;i++)
        {
            finalsum+=array[i];
        }
        
        return sum-finalsum;
    }
};

//optimal 2 Using XOR
/*https://leetcode.com/problems/missing-number/solutions/3838594/missing-number-using-xor-beats-99-09-efficient-with-explanation/*/
class Solution {
public:
    int missingNumber(vector<int>& a,int N) {
        int xor1=0;
        int xor2=0;

        for(int i=0;i<N-1;i++)
        {
            xor2=xor2^a[i];
            xor1=xor1^(i+1);
        }
            xor1=xor1^N;

        return (xor1^xor2);
    }
};