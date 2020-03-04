#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll test;
    cin>>test;
    
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        
        if(a==b) {
            cout<<0<<endl;
        }
        
        else if((a>b && ((a-b)%2==0)) || ((b>a && (b-a)%2==1))){
            cout<<1<<endl;
        }
        
        else cout<<2<<endl;
        
    }
    return 0;
}
