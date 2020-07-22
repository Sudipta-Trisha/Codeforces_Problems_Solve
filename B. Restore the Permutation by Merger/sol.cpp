
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 22, 2020 5:55 PM
 *    Problem Name  : B. Restore the Permutation by Merger
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1385/B
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    ll test;
    cin >> test;
 
    while(test--){
        ll n;
        cin >> n;
        vector<int>arr(2*n);
        ll vis[n+1];
        vector<ll>v;
        for(auto &x:arr){
            cin >> x;           
        }
 
        memset(vis,false,sizeof(vis));
 
        for(int i=0; i<2*n; i++){
            if(vis[arr[i]] == false){
                v.push_back(arr[i]);
                vis[arr[i]] = true;
            }
        }
 
        for(ll i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }


    return 0 ;
}
