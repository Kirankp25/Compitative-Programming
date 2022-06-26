#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void fun1(int k,int p)
{
    for(int i=0;i<p;i++)
    {
        cout<<i+1<<" "<<endl;
    }
    int kp=1+k+1;
    for(int i=1;i<k;i++)
    {
        int kbp=kp;
        cout<<kbp<<" ";
        for(int j=1;j<p;j++)
        {
            cout<<kbp+i+1<<" ";
            kbp+=i+1;
        }
        kp+=k+1;
    }
    
}
void fun2(int k,int p)
{
    int kk;
    for(int i=0,a=p+1;i<k;i++,a++)
    {
        kk=i+1;
        cout<<kk<<" ";
        for(int j=1;j<p;j++)
        {
            cout<<kk+a<<" ";
            kk+=a;
            
        }
        cout<<endl;
    }
}


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int k,p;
        cin>>k>>p;
        if(k<p)
        {
            fun1(k,p);
        }
        else
        {
            fun2(k,p);
        }
        
    }
	// your code goes here
	return 0;
}
