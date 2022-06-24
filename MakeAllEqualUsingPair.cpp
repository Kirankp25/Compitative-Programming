//inbuilt fuctions in cpp for sorting
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                temp++;
                
            }
            cnt=max(cnt,temp);
        }cout<<n-cnt<<endl;
        // sort(arr,arr+n);
    //cout<<"after sorting"<<endl;
    // for(auto x:arr)
    // {cout<<x<<" ";}
    // cout<<endl;
    // int arr[]={23,4,5,2,6,1,78,5,56,33,98,143};
    // int n=sizeof(arr)/sizeof(int);
    // cout<<"bsfore sorting"<<endl;
    // for(auto x:arr)
    // {cout<<x<<" ";}
    // cout<<endl;
    // sort(arr,arr+n);
    // cout<<"after sorting"<<endl;
    // for(auto x:arr)
    // {cout<<x<<" ";}
    }
    return 0;
}