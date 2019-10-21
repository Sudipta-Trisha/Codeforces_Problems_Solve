#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--){
        int c,m,x;
        cin>>c>>m>>x;
        
        int low = 0 ,high= min({c,m});
        while(low<high){
            int team = (low+high+1)/2;
            bool ok = true;
            int extra = x;
          
            if(team<=c)
                extra  += (c - team);
            else
                 ok = false;
            if(team<=m)
                extra  += (m - team);
            else
                 ok = false;
            if(extra<team)
                 ok = false;
                
            if(ok)
                low = team;
            else
                high = team-1;
            
              //cout<<"team "<<team<<" "<<extra<<" "<<ok<<endl;
        }
        cout<<low<<endl;
    }
}
