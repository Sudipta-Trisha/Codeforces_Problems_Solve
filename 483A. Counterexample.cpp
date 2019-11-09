#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll l,r;
    cin>>l>>r;
    if(l%2!=0)
        l++;

    if((l+2)>r)
        cout<<"-1"<<endl;
    else
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    return 0;
}
