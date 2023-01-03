//DELETE COLUMNS TO MAKE SORTED 
// LEETCODE daily 03/01/2023
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string> &strs) {
        int count=0;                // ["cba","daf","ghi"]
        int row = strs.size();              //c b a
        int col = strs[0].size();           //d a f
                                            //g h i
        for(int j=0; j<col; j++)
        {
            for(int i=0; i<row-1; i++)
            {
                if(strs[i][j]>strs[i+1][j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<string> strs{"cba","daf","ghi"};
    cout<<s.minDeletionSize(strs);

    return 0;
}