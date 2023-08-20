#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> ans = {5, 3, 8, 2, 9, 4, 7, 6};

    double median;

    for (int i = 0; i < ans.size(); i++)
    {
        if(ans.size()%2==0)
        {
            int middle1=ans.size()/2-1;
            int middle2=ans.size()/2;

            median=(ans[middle1]+ans[middle2])/2.0;
        }
        else{
            int middle=ans.size()/2;
            median=ans[middle]/2.0;
        }
    }

    cout<<median<<endl;
    

    return 0;

}