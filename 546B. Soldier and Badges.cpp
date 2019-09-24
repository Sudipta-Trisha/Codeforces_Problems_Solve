#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr,arr+n);

	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				arr[j]++;
				cnt++;
			}
		}
	}

	cout << cnt <<endl;
	return 0;
}




