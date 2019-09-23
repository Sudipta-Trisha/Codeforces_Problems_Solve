#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    
    ll arr[n][n];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    ll temp = (arr[0][1]*arr[0][2])/arr[1][2];
    temp = sqrt(temp);
    v.push_back(temp);
    for(int i=1; i<n; i++){
        v.push_back(arr[0][i]/temp);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    solve();
    return 0;
}
