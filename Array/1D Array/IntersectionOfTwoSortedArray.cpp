#include <bits/stdc++.h> 
using namespace std;

/*https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?leftPanelTab=1*/

//Brute Force
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

	// Write your code here.
	vector<int> intersection;

	vector<int> visited(m,0);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr1[i]==arr2[j] && visited[j]!=1)
			{
				intersection.push_back(arr1[i]);
				visited[j]=1;
				break;
			}

			if(arr2[j]>arr1[i])
			break;
		}
	}

	return intersection;
}

//OPtimal 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

	// Write your code here.
	vector<int> intersection;

	int i=0;
	int j=0;

	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		
		else if(arr2[j]<arr1[i])
		{
			j++;
		}

		else{
			intersection.push_back(arr1[i]);
			i++;
			j++;
		}
	}

	return intersection;
}