#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        vector<ll>number(n+30);
        vector<ll>position(n+30);
        vector<ll>result;
        for(ll i=0; i<n; i++){
            cin>>number[i];
            position[number[i]-1] = i;
        }
        ll left=n, right=0;
        for(ll i=0; i<n; i++){
            left = min(left,position[i]);
            right = max(right,position[i]);
            if(abs(left-right)==i) result.push_back(1);
            else result.push_back(0);
        }
        for(ll i=0; i<n; i++)
            cout<<result[i];
        cout<<endl;
    }
    return 0;
}
