#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void probability()
{
    ll y,w;
    cin>>y>>w;
    
    ll dot;
    dot = max(y,w);
    dot = 6-dot+1;
    
    if(dot%2==0)
    {
        if(dot==2)
        {
            printf("1/3\n");
        }
        else if(dot==4)
        {
            printf("2/3\n");
        }
        else
        {
            printf("1/1\n");
        }
    }
    
    else
    {
        if(dot==3)
            printf("1/2\n");
    
        else
            printf("%d/6\n",dot);
    }   
}

int main()
{
    probability();
    return 0;
}
