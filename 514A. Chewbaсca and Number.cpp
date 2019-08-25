#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    string str;
    cin>>str;
    
    string s = "";
    
    int size = str.length();
    
    for(int i=0; i<size; i++)
    {
        int remainder = str[i]-'0';
        if(remainder>=5 && remainder<=9)
        {
           int result = 9 - remainder;
           s.push_back(result+'0');
        }
        else 
        {
            s.push_back(remainder+'0');
        }
    }
   
    if(s[0]=='0')
        s[0] = '9'- s[0] + '0';
    cout<<s<<endl;
    
}

int main()
{
    solve();
    return 0;
}
