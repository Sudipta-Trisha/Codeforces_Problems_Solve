#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll a, ll b, ll n, ll m)
{
    ll min_1 = 0 , min_2 = 0;

    if(n <= m) {
        if(a > b)
            cout << n*b << endl;
        else 
            cout << n*a << endl;
    }

    else if((m*a) <= (m+1)*b) {
        ll total = n/(m+1); 
        ll temp = n%(m+1);  
            
        total = total*m*a;

        total = total + temp*min(a,b);
        cout << total << endl;
    }

    else{
        cout << n*b << endl;
    }
}

int main()
{
    ll testcase;
    cin >> testcase;

    while(testcase--) {
        ll a,b,n,m;
        cin >> a >> b >> n >> m;

        solve(a,b,n,m);
    }
}