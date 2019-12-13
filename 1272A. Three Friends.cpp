#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int test;
    cin>>test;
    while(test--){
        int arr[5];
        ll ans=0;
        for(int i=0; i<3; i++)
            cin>>arr[i];
        sort(arr,arr+3);
        if(arr[0]==arr[1] && arr[0]!=arr[2]){
            arr[0]++, arr[1]++;
            if(arr[0]<arr[2])
                arr[2]--;
        }
        else if(arr[1]==arr[2] && arr[0]!=arr[2]){
            arr[1]--,arr[2]--;
            if(arr[0]<arr[2])
                arr[0]++;
        }
        else if(arr[0]<arr[1] && arr[1]<arr[2])
            arr[0]++,arr[2]--;
        ans = abs(arr[0]-arr[1]) + abs(arr[0]-arr[2]) + abs(arr[1]-arr[2]);
        cout<<ans<<endl;
    }
    return 0;
}
