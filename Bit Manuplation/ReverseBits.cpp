#include<bits/stdc++.h>
using namespace std;

/*
    https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
*/

class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long res=0;
        int pow=31;
        
        while(X!=0)
        {
            res+=(X&1)<<pow;
            pow--;
            X=X>>1;
        }
        
        return res;
    }
};