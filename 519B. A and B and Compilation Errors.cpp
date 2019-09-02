#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void error()
{
    ll n;
    cin>>n;
    
    ll err1[n],err2[n-1], err3[n-2];
    ll sum1=0, sum2=0 ,sum3=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>err1[i];
        sum1 += err1[i];
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>err2[i];
        sum2 += err2[i];
    }
    for(int i=0; i<n-2; i++)
    {
        cin>>err3[i];
        sum3 += err3[i];
    }
    
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
}
int main()
{
    error();
    return 0;
}
