#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    
    if(n>m){
       cout<< n-m <<endl;
       return 0;
    }
    while(n<m){
        if(m%2!=0){
            m += 1;
            cnt++;
        }
            
        else{
           m = m/2;
           cnt++;
        }
    }
    cout<<abs(cnt + n - m)<<endl;
}
