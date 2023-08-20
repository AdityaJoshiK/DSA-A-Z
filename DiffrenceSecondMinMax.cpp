#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> numbers = {1, 3, 5, 7, 9, 11, 13, 15};

    int min=INT_MAX;
    int secondmin=INT_MAX;

    int max=INT_MIN;
    int secondmax=INT_MIN;

    for (int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i]>max)
        {
            secondmax=max;
            max=numbers[i];
        }
        else if(numbers[i]<max && numbers[i]>secondmax){
            secondmax=numbers[i];        }

        if(numbers[i]<min)
        {
            secondmin=min;
            min=numbers[i];
        }
        else if(numbers[i]>min && numbers[i]<secondmin)
        {
            secondmin=numbers[i];
        }
    }

    cout<<max<<" "<<secondmax<<endl;
    cout<<min<<" "<<secondmin;
    
    return 0;

}