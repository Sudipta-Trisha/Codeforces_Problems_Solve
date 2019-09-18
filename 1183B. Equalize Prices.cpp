#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin>>test;
    
    while(test--){
        ll n,k;
        cin>>n>>k;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        ll mini = *min_element(v.begin(),v.end());
        ll maxx = *max_element(v.begin(),v.end());
        
        if((maxx-mini)<=2*k)
            cout<<mini+k<<endl;
        else
            cout<<"-1"<<endl;
    }
    
    return 0;
}
