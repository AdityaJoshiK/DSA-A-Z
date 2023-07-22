#include<bits/stdc++.h>
using namespace std;

/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/959605319/*/

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int start=0,end=1;

	while(end!=n-1)
	{
		if(arr[start]==arr[end])
		{
			end++;
		}
		else{
			start++;
			arr[start]=arr[end];
		}
		
	}

    for(auto it : arr)
    {
        cout<<it<<",";
    }
        return start;
}

int main()
{
    vector<int> arr={1,2,2,3,3,3,4,4,5,5};
    cout<<removeDuplicates(arr,10);

    return 0;

}
