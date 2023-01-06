//daily leetcode problem
//06/01/2023
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long int sum=0;
        int cnt=0;
        if(coins<costs[0]) return 0;
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum<=coins)
            cnt++;
            
        }
        return cnt;
        
    }
};
int main(){
    Solution s;
 
    vector<int> v={1,2,4,3,1};
    int c=7;   //[[10,16],[2,8],[1,6],[7,12]]
    cout<<s.maxIceCream(v,c);
}