
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 05, 2020 12:34 AM
 *    Problem Name  : B. Minimum Product
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll solve(ll a,ll b,ll x,ll y,ll n)
{
    ll mn = min((a-x) , n);
    n = n - mn;
    a = a - mn;

    ll mini = min((b-y),n);
    n = n - mini;
    b = b - mini;

    return a*b;
}

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--) {
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;

        ll ans1 = solve(a,b,x,y,n);
        ll ans2 = solve(b,a,y,x,n);

        cout << min(ans1, ans2) << endl;
    }

    return 0 ;
}
