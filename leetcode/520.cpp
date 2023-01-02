//LEETCODE PROBLEM NO:520
//DETECT CAPITAL LETTERS

#include<iostream>
using namespace std;
class Solution {
//public:
    bool detectCapitalUse(string word) 
    {
        int l=word.length();
        int count=0;
        if(l==1) return true;
        else{
            for(int i=0; i<word.size(); i++)
            if(isupper(word[i]))
                count++;
        
            if(count==1 && isupper(word[0]))
                return true;
            if(count==0 || count==word.size())
                return true;
            else
                return false;
        }
        // int l=word.length();
        // if(l==1) return true;
        // else{
        //     if(int(word[1])>=65 and int(word[1])<=91){
        //         for(int i=2;i<l;i++){
        //             if(int(word[i])>=65 and int(word[i])<=91){
        //                 continue;
        //             }
        //             else{
        //                 return false;
        //             }
        
        //         return true;

        //         }
        //     }
        //     else{
        //         for(int i=2;i<l;i++){
        //             if(int(word[i])>=97 and int(word[i])<=122){
        //                 continue;
        //             }
        //             else{
        //                 return false;
        //             }
        //         }
        //     return true;
        
        //     }
        // }
        
    }
};
int main(){
    Solution s;
    string word="USA";
    cout<<s.detectCapitalUse(word);
}