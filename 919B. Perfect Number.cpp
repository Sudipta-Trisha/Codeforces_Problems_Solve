#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve()
{

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    for(ll i=0; ;i++){
        int ans = i;
        int sum = 0;

        while(ans){
            sum = sum + (ans%10);
            ans/=10;
        }
        if(sum==10){
            n--;
            if(n==0){
                cout<<i<<endl;
                return 0;
            }

        }
    }
    return 0;
}
