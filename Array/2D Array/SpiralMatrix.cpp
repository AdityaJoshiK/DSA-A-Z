#include<bits/stdc++.h>
using namespace std;

/*
  https://leetcode.com/problems/spiral-matrix/submissions/976318935/
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        int total=row*col;
        int count=0;

        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        vector<int> result;

        while(count<total)
        {
            //first row
            for(int index=startingCol; count<total &&index<=endingCol; index++)
            {
                result.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //last column
            for(int index=startingRow; count<total &&index<=endingRow; index++)
            {
                result.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //last row
            for(int index=endingCol; count<total &&index>=startingCol; index--)
            {
                result.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //first column
            for(int index=endingRow; count<total &&index>=startingRow; index--)
            {
                result.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }

        return result;
    }
};