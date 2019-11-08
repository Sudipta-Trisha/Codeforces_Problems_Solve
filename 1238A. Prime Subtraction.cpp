#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while(test--){
        ll x,y;
        cin>>x>>y;
        if((x-y)>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
