#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n,m;
        cin>>n>>m;

        if(n==1) cout<<"0"<<endl;
        else if(n==2) cout<<m<<endl;
        else{
            cout<<m+m<<endl;
        }
    }
}
