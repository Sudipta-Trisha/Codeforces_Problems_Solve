#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    bool flag = false;
    
    ll key=1;
    
    for(ll i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    
    while(key<=n){
        if(key==t){
            flag = true;
            break;
        }
        
        if(key>t)
            break;
        
        key = key + arr[key-1];
        
    }
    
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        
    return 0;
}
    
    
