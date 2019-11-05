#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    if(n==0) cout<<"1"<<endl;
    else if(n%2==1){
        if((n%8==1)||(n%8==5)) cout<<"8"<<endl;
        else if((n%8==3) || (n%8==7)) cout<<"2"<<endl;
    }

    else if(n%2==0){
        if((n%8==2) || (n%8==6)) cout<<"4"<<endl;
        else if((n%8==0) || (n%8==4)) cout<<"6"<<endl;
    }
    return 0;
}
