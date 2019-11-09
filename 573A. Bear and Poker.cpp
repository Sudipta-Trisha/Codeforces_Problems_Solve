#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        while(arr[i]%2==0)
            arr[i] = arr[i]/2;
        while(arr[i]%3==0)
            arr[i] = arr[i]/3;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i]!=arr[i+1]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
