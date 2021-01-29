#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;


    while(test--){
        bool flag = false;
        ll n;
        cin >> n;
        //ll temp = n;

        while(n%2==0){
           n/=2;
        }

        if(n != 1) cout << "YES"  << endl;
        else cout << "NO"  << endl;
    }
    return 0;
}
