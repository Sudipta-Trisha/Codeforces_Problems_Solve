#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void equal()
{
   ll n;
   cin>>n;
   
   vector<ll>odd;
   vector<ll>even;
   if(n%2==1){
       cout<<"YES"<<endl;
       for(int i=1; i<=2*n; i++)
       {
           if(i%2==1)
            odd.push_back(i);
        else
            even.push_back(i);
       }
       ll sum=0, sum1=0;
        for(int i=0; i<even.size(); i++)
        {
            sum += even[i];
        }
        for(int i=0; i<odd.size(); i++)
        {
            sum1 += odd[i];
        }
        
        if((sum-sum1)==n)
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==1)
                {
                    swap(odd[i],even[i]);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<odd[i]<<" ";
        }
        for(int i=0; i<n; i++)
        {
            cout<<even[i]<<" ";
        }
   }
   else
    cout<<"NO"<<endl;
   
}
int main()
{
    equal();
    return 0;
}

