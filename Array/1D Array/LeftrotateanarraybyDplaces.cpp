#include<bits/stdc++.h>
using namespace std;

/*https://leetcode.com/problems/rotate-array/description/*/

void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }

int main()
{

    
    return 0;

}