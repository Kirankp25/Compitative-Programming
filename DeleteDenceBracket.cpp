#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ar[n];
        cin>>ar;
        int cnt=0;
        // int i=0;
        // int j=n-1;
        // while(i<j)
        for(int i=0,j=n-1;i<j;i++,j--)
        {
           if(ar[i]=='(' and ar[j]==')') {
               continue;
               
           }
           else if(ar[i]=='(' and ar[j]=='(') {
               cnt++;
               
           }
           else if(ar[i]==')' and ar[j]==')'){
               cnt++;
               
           }
           else if(ar[i]==')' and ar[j]=='('){
               cnt+=2;
               
           }
           else{if(i<j)
           cnt++;
               
           }
           
           i++;
           j--;
            
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}
