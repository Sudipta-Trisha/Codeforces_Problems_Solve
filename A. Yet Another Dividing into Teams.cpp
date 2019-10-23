#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        int cnt=1;
        for(int i=1; i<n; i++){
            if(abs(arr[i]-arr[i-1])<=1){
                cnt=2;
                break;
            }
           
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}
