#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void equal()
{
    ll n;
    cin>>n;
    
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());
    
    ll cnt = 0;
    for(int i=0; i<n-1; i+=2)
    {
        ll sum = abs(v[i]+1) + abs(v[i+1]+1);
        ll sub = abs(v[i]-1) + abs(v[i+1]-1);
        
        cnt = cnt + min(sum,sub);
    }
    if(n%2==1){
        cnt = cnt + abs(v.back()-1);
    }
        
    cout<< cnt <<endl;
}

int main()
{
    equal();
    return 0;
}
