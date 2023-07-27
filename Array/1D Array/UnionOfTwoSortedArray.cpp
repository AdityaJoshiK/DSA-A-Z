#include<bits/stdc++.h>
using namespace std;

/*https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1*/

//Approach 1:-Brute Force
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set<int> st;

    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }

     for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }

    vector<int> vc(st.begin(), st.end());

    return vc;
}

// Approach 2:- Optimal

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> unionArray;
        
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                if(unionArray.size()==0 || unionArray.back()!=a[i])
                {
                    unionArray.push_back(a[i]);
                }
                i++;
            }
            
            else{
                if(unionArray.size()==0 || unionArray.back()!=b[j])
                {
                    unionArray.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n)
        {
            if(unionArray.size()==0 || unionArray.back()!=a[i])
                {
                    unionArray.push_back(a[i]);
                }
                i++;
        }
        
        while(j<m)
        {
            if(unionArray.size()==0 || unionArray.back()!=b[j])
                {
                    unionArray.push_back(b[j]);
                }
                j++;   
        }
        
        return unionArray;
}