#include<bits/stdc++.h>
#define ll long long int
#define loop for(int i=0; i<n; i++)
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        vector<ll>v(n);
        loop{
            scanf("%lld",&v[i]);
        }
        sort(v.begin(),v.end());
        cout<<min((v[n-2]-1),n-2)<<endl;
    }
    return 0;
    
}
