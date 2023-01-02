#include<iostream>
using namespace std;
class Solution 
{
public:
    bool detectCapitalUse(string word) 
    {
        int l=word.length();
        if(l==1) return true;
        else{
            if(int(word[1])>=65 and int(word[1])<=91){
                for(int i=2;i<l;i++){
                    if(int(word[i])>=65 and int(word[i])<=91){
                        continue;
                    }
                    else{
                        return false;
                    }
        
                return true;

                }
            }
            else{
                for(int i=2;i<l;i++){
                    if(int(word[i])>=97 and int(word[i])<=122){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            return true;
        
            }
        }
        
    }
};
int main(){
    Solution s;
    string word="USA";
    cout<<s.detectCapitalUse(word);
}