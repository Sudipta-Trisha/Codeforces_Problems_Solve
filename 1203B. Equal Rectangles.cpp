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
        ll num = 4*n;
        ll arr[num+10];
        for(ll i=0; i<num; i++){
            cin>>arr[i];
        }
        sort(arr,arr+num);
        bool flag=true;
        ll area = -1;
        for(ll i=0; i<num; i+=2){
            if(arr[i] != arr[i+1] || arr[num-i-1] != arr[num-i-2]){
                flag = false;
                break;
            }

            ll a = arr[i]*arr[num-1-i];
            if(area==-1)
                area = a;

            if(area != a) {
                flag = false;
                break;
            }
        }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
return 0;
}
