
// LEETCODE daily 07/01/2023
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        int t_gas=0,t_cost=0;
        int c_gas=0, s_pnt=0;
        for(int i=0;i<n;i++)
        {
            t_gas+=gas[i];  //0.1.2.3.4
            t_cost+=cost[i];//1,2,3,4,5
                                //3,4,5,1,2
            c_gas+=gas[i]-cost[i];
            if(c_gas<0)
            {
                s_pnt=i+1;
                c_gas=0;
            }
        }
        return (t_gas<t_cost)?-1:s_pnt;     
    
    }
};
int main(){             // #
    Solution s;    //0.1.2.3.4
    vector<int> gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};
    cout<<s.canCompleteCircuit(gas,cost);
    return 0;
}
//0 1 2
//2 3 4
//3 4 3