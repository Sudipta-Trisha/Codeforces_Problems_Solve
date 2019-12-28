#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--){
       ll a,b,n,s;
       cin>>a>>b>>n>>s;
       
       if(s%n<=b && (a*n+b)>=s) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
   }
   return 0;
}
