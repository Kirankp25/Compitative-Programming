#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <boost/math/common_factor.hpp>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;(i*i)<=n;i++)
        {
            for(int j=1;(j*j)<=n;j++)
            {
                int x=(__gcd(i,j));
                int y=(boost::math::lcm(i,j));
                if(((i*i)+(j*j)+(x*x)+(y*y))==n)
                  {
                  if(i==j)
                  cnt++;
                  else
                  cnt+=2;
                  }
                 else
                 continue;
            }
        }
        if(cnt%2==0)
        cout<<cnt/2<<endl;
        else
        cout<<cnt<<endl;
    }
	return 0;
}

