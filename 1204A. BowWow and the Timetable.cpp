#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int result()
{
    string s;
    cin>>s;
    
    ll len = s.size(),num;
    if(len%2==0)
    {
        num = len/2;
        cout<<num<<endl;
        return 0;
    }
   else{
       num = len/2;
       for(int i=1; i<len; i++)
       {
           if(s[i]=='1')
           {
               num++;
               break;
           }
       }
   }
 
   cout<<num<<endl;
}
int main(){
    result();
    return 0;
}
