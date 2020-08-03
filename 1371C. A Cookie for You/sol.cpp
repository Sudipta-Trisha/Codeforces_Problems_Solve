
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 03, 2020 2:05 PM
 *    Problem Name  : C. A Cookie for You
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1371/C
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
        ll a,b,n,m;
        cin >> a >> b >> n >> m;

        if( (a+b) < (n+m) ){
            cout << "No" << endl;
        }

        else if(min(a,b) < m){
            cout << "No" << endl;
        }

        else cout << "Yes" << endl;
    }

    return 0 ;
}
