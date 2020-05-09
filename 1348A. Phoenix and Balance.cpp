#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;

        int temp = n/2;

        ll ans1=pow(2,n), ans2=0;

        for(int i=1; i<temp; i++){
            ans1 += pow(2,i);
        }

        for(int i=temp; i<n; i++){
            ans2 += pow(2,i);
        }

        cout<<ans1-ans2<<endl;
    }
}
