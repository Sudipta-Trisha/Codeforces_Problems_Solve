#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;

        int temp = n/2020;
        int temp2 = n%2020;

        if(temp >= temp2) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }
    return 0;
}
