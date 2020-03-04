#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        
        int t1 = b*x;
        int t2 = b*((a-1)-x);
        int t3 = a*y;
        int t4 = a*((b-1)-y);
        
        int maxx = max(t1,max(t2,max(t3,t4)));
        cout<<maxx<<endl;
    }
    
    return 0;
}
