#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void price()
{
    ll test;
    cin>>test;
    
    while(test--)
    {
        ll n;
        cin>>n;
        
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        ll mini = v[n-1], cnt=0;
        
        for(int i=n-2; i>=0; i--)
        {
            if(mini<v[i])
                cnt++;
            if(mini>v[i])
                mini = v[i];
            
        }
        
        cout<<cnt<<endl;
    }
}
int main()
{
    price();
    return 0;
}
