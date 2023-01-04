//daily leetcode problem
//04/01/2023
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int ,int> order;
        for(auto x:tasks)
        order[x]++;
        int cnt=0;
        for(auto x:order){
            int t=x.second;
            if(t==1) return -1;
            if(t%3==0) cnt+=t/3;
            else cnt+=(t/3)+1;
        }
        return cnt;
        // int t=0;
        // int cnt=1;
        // int m=cnt;
        // int temp=tasks[0];
        // sort(tasks.begin(),tasks.end());
        // for(int i=0;i<tasks.size();i++){
        //     if(temp!=tasks[i] and t<=3  ){//2,2,3,3,2,4,4,4,4,4
        //         t=0;
        //         temp=tasks[i];///2 2 2 |3 3 |4 4 4 |4 4 
        //         if(t==2 or t==3)
        //         cnt++;
        //     }
        //     else{
        //         if(t>=3) cnt++;
        //         t++;
        //     }
        // }
        // // for(auto x:tasks)
        // // cout<<x<<" ";
        // if(cnt==m) return -1;
        // else return cnt;
    }
};
int main(){
    Solution s;
    vector<int>v={2,3,3};
    cout<<s.minimumRounds(v);
    return 0;
}