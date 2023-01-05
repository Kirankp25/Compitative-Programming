//daily leetcode problem
//05/01/2023
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        
        sort(points.begin(), points.end(), comp);
        
        int arrows = 1;
        int last = points[0][1];
        
        for(int i=1; i<points.size(); i++)
        {
            if(points[i][0]>last)
            {
                arrows++;
                last = points[i][1];
            }
        }
        return arrows;
    }
};
int main(){
    Solution s;
 
    vector<vector<int>> v={{10,16},{2,8},{1,6},{7,12}};   //[[10,16],[2,8],[1,6],[7,12]]
    cout<<s.findMinArrowShots(v);
}