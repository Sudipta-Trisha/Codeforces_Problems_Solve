#include<bits/stdc++.h>
using namespace std;

void game()
{
    string s;
    int check = 0;
    while(cin>>s){
    
        long long int len = s.size();
        
        for(int i=0; i<len-1; i++)
        {
            if(s[i]==s[i+1])
            {
                check++;
                s.erase(i,2);
                len = s.size();
                i-=2;
                
            }
        }
        
        if(check%2==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}
int main()
{
    game();
    return 0;
}
