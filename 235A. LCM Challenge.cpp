#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    if(n==1 || n==0 || n==2) {
        cout<<n<<endl;
        return 0;
    }
    else if(n==3){
        cout<<"6"<<endl;
        return 0;
    }
    else if(n%2==0){
        if(n%3==0){
            cout<<(n-1)*(n-2)*(n-3)<<endl;
            return 0;
        }
        else{
            cout<<(n)*(n-1)*(n-3)<<endl;
            return 0;
        }
    }
    else cout<<n*(n-1)*(n-2)<<endl;
    return 0;
}
