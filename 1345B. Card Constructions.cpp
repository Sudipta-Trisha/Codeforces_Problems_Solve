#include<bits/stdc++.h>
#define ll long long int
#define sz 10000000
using namespace std;
ll height[sz+1];

void cards()
{

    ll total = 0;
    height[0] = 0;
    height[1] = 2;
    for(ll i=2; i<=sz; i++ ){
       // cout<<i<<" ";
        height[i] = ((3*i*i)+i)/2;
    }
}

int main()
{
    cards();
    int test;
    cin>>test;
    while(test--){
       ll num;
       cin>>num;
       ll temp = num;
       ll cnt=0;
           for(ll i=sqrt(num); i>=1; i--){
              if(temp>=height[i]) {
                    while(temp>=height[i]){
                        cnt++;
                        temp -= height[i];
              }
           }
       }
       cout<<cnt<<endl;
    }
    return 0;
}
