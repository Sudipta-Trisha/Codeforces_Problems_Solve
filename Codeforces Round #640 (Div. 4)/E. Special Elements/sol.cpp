
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 19, 2020 2:48 PM
 *    Problem Name  : E. Special Elements
 *    Problem Limit : 1000 ms , 64 MB
 *    Problem Url   : https://codeforces.com/contest/1352/problem/E
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    ll test;
    cin >> test;

    while(test--){
        ll n;
        cin >> n;

        ll arr[n+1];
        ll vis[n+1];
        memset(vis,0,sizeof(vis));

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        for(ll i=0; i<n; i++){
            ll sum = arr[i];
            for(ll j=i+1; j<n; j++){
                sum = sum + arr[j];
                if(sum <= n) vis[sum] = 1;
                else break;
            }
        }
        
        ll res = 0;
        for(ll i=0; i<n; i++){
            if(vis[arr[i]] == 1) res++;
        }
        
        cout << res << endl;
    }

    return 0 ;
}
