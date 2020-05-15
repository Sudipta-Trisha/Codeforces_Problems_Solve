#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        
        n = n/2;
        
        ll ans = n*(n+1)*(2*n+1)*8;
        cout<<ans/6<<endl;
    }
    return 0;
}
