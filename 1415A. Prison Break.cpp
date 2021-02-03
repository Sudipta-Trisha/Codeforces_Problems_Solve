#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll test;
    cin >> test;

    while(test--){
        ll n,m,r,c;
        cin >> n >> m >> r >> c;

        int temp1 = max(abs(n-r), abs(1-r));
        int temp2 = max(abs(m-c), abs(1-c));

        cout << temp1+temp2 << endl;
    }
    return 0;
}
