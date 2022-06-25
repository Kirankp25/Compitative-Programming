#include <iostream>
#include <algorithm>
using namespace std;
bool done()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]+arr[i+1]>x)
            return 0;
            
            else
            swap(arr[i],arr[i+1]);
        }
    }
    return 1;
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        if(done())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
