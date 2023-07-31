#include<bits/stdc++.h>
using namespace std;

//Better Using Map
/*
    https://www.codingninjas.com/studio/problems/find-the-single-element_6680465?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
*/

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	map<int,int> mpp;

	int n=arr.size();

	for(int i=0;i<n;i++)
	{
		mpp[arr[i]]++;
	}

	for(auto it:mpp)
	{
		if(it.second==1)
		{
			return it.first;
		}
	}

	return 0;
}

//Optimal Using XOR
/*
https://leetcode.com/problems/single-number/submissions/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int xorr=0;

        for(int i=0;i<nums.size();i++)
        {
            xorr=xorr^nums[i];
        }

        return xorr;
    }
};