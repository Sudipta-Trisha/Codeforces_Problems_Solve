#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll cnt=0;

    while(n!=0)
    {
        if(n>=100){
            n -= 100;
            cnt++;
            //cout<<cnt<<"\n";
        }
         else if(n>=20){
            n -= 20;
            cnt++;
            //cout<<cnt<<"\n";
        }
         else if(n>=10){
            n -= 10;
            cnt++;
           // cout<<cnt<<"\n";
        }
        else if(n>=5){
            n -= 5;
            cnt++;
           // cout<<cnt<<"\n";
        }
        else if(n>=1){
            n -= 1;
            cnt++;
           // cout<<cnt<<"\n";
        }
    }

    cout<<cnt<<endl;
    return 0;
}
