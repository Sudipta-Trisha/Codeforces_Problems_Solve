
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 31, 2020 1:00 PM
 *    Problem Name  : B. Omkar and Infinity Clock
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1392/problem/B
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
        ll n,k;
        cin >> n >> k;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        
        if(k%2==0) k = 2;
        else k = 1;

        while(k--){
            ll mx = *max_element(v.begin(),v.end());
            for(ll i=0; i<n; i++){
                v[i] = mx - v[i];
            }
        }

        for(auto x: v){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0 ;
}
