
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 29, 2020 5:17 PM
 *    Problem Name  : C. Create The Teams
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1380/C
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
        ll n,x;
        cin >> n >> x;

        ll arr[n+1];

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n, greater<int>());

        ll ans=0, cnt=1;

        for(ll i=0; i<n; i++){
            if(arr[i]*cnt >= x){
                ans++;
                cnt = 0;
            }
            cnt++;
        }

        cout << ans << endl;
    }



    return 0 ;
}
