#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll cnt=0;
        map<int,int>mp;
        for(ll i=n-1; i>=0; i--){
            if(arr[i]%2==0 && mp[arr[i]]==0){
                while(arr[i]%2==0){
                    mp[arr[i]]++;
                    arr[i]/=2;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
