#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void account()
{
   ll n,rem1,rem2;
   cin>>n;
   
   if(n>0)
    cout<<n<<endl;
   else{
        rem1 = (n/10);
        rem2 = ((n/100)*10)+ ((n%10)%10);
        cout<<max(rem1,rem2)<<endl;
   }
}
int main()
{
    account();
    return 0;
}
