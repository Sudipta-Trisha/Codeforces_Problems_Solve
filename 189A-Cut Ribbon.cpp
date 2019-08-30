#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void ribbon()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    
    int temp,maxx=0;
    temp = min(a,min(b,c));
    temp = n/temp;
    
    for(int x=temp; x>=0; x--)
    {
        for(int y=0; y<=temp; y++)
        {
            int z = abs((n-(a*x+ b*y))/c);
            if((a*x+b*y+c*z)==n)
            {
               maxx = max(maxx,(x+y+z)); 
            }
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    ribbon();
    return 0;
}
