
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 29, 2020 1:15 PM
 *    Problem Name  : B. Sequential Nim
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1382/B
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
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        ll cnt=0;

        for(ll i=0; i<n; i++){
            if(arr[i] == 1) cnt ++;
            else break;
        }

        if( cnt == n ){
            if( cnt % 2 == 0 ) cout << "Second" << endl;
            else cout << "First" << endl;
        }   

        else{
            if(cnt % 2 == 0) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }

    return 0 ;
}
