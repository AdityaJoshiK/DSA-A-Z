#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {5, 3, 8, 2, 9, 4, 7};

    int small=0;

    int large=numbers.size()-1;

    for (int i = 0; i < numbers.size(); i++)
    {
        if(small==large){
            cout<<numbers[i];
        }

        small++;
        large--;
    }
    

    
    return 0;
}
