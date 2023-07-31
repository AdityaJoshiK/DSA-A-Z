#include<bits/stdc++.h>
using namespace std;

/*https://leetcode.com/problems/max-consecutive-ones/description/
*/
/*
T.c :- O(n)
S.c ;- O(1)
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //Not Solved
        int staticCount=0,finalCount=0;
    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                staticCount++;
            }
            else{ 
                staticCount=0;
            }

            if(staticCount>finalCount)
            finalCount=staticCount;
        }

        return finalCount;
    }
};