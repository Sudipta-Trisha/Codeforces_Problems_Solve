#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int arr[n+1];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        int ans = 1,cnt=1;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1]){
                cnt++;
            }
            else  cnt=1;
            ans = max(ans,cnt);
        }

        cout << ans << endl;
    }
}
