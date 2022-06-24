#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    int result = min(a, b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result*result;
    
}

int lcm(int a,int b)
{
    return ((a / gcd(a, b)) * b)*((a / gcd(a, b)) * b);
}

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
                
                if(((i*i)+(j*j)+gcd(i,j)+lcm(i,j))==n)
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
	// your code goes here
	return 0;
}

