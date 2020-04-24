#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000

vector<ll>v;
bool arr[10000000+10];
void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }

    }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    if(n>2) cout<<"2"<<endl;
    else cout<<"1"<<endl;
    for(int i=2; i<=n+1; i++){
        if(arr[i]==0) cout<<"1"<<" ";
        else cout<<"2"<<" ";
    }
    cout<<endl;
    return 0;
}
