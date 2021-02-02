#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll test;
    cin >> test;

    while(test--){
        ll n,k;
        cin >> n >> k;

        if( n%k == 0) cout << "1" << endl;
        else if( (k/n) >=1 ) cout << (n+k-1)/n << endl;
        else cout << "2" << endl;
    }
}
