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
        ll temp = n/2;
        if(temp%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(ll i=1; i<=temp; i++){
                cout<<i*2<<" ";
            }
            for(ll i=1; i<temp; i++){
                cout<<(i*2)-1<<" ";
            }
            cout<<(n+temp)-1<<endl;
        }
    }
    return 0;
}
