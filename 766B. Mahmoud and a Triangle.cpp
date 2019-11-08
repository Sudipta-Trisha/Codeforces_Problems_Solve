#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll len[n];
    for(ll i=0; i<n; i++){
        cin>>len[i];
    }
    sort(len,len+n);
    for(ll i=0; i<n-2; i++){
        if(len[i]+len[i+1]>len[i+2]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
