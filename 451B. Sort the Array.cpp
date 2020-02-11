#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool flag = false;

void sorting(ll n, ll arr[],ll extra[])
{
    sort(arr,arr+n);
    ll left=0,right=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=extra[i]) {
            left = i;
            break;
        }
    }
    
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=extra[i]) {
            right = i;
            break;
        }
    }
    
    reverse(extra+left, extra+right+1);
    
    for(int i=0; i<n; i++){
        if (arr[i]==extra[i])
            flag = true;
        else {flag = false;break;}
    }
    
    if(flag==true) cout<<"yes"<<"\n"<<left+1<<" "<<right+1<<endl;
    else cout<<"no"<<endl;
    
}

int main()
{
    ll n;
    cin>>n;
    ll arr[n],extra[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        extra[i] = arr[i];
    }
    
    sorting(n,arr,extra);
    
    return 0;
}
    
    
