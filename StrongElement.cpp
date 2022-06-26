#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;



void problem(int p[],int kp[],int s[],int n)
{
    p[0]=kp[0];
    for(int i=1;i<n;i++)
    {
        p[i]= __gcd(p[i-1],kp[i]);
    }
    
    s[n-1]=kp[n-1];
    for(int i=n-2;i>=0;i--)
    {
        s[i]= __gcd(s[i+1],kp[i]);
    }
    
    
}
int outoff(int l,int r,int p[],int s[],int n)
{
    if(l==0)
    {
        return s[r+1];
    }
    
    if(r==n-1)
    {
        return p[l-1];
    }
    return __gcd(p[l-1],s[r+1]);
}

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int kp[n];
        int p[n];
        int s[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>kp[i];
        }
        problem(p, kp ,s ,n);
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(outoff(i,i,p,s,n)>1){ a++;}
        }
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
