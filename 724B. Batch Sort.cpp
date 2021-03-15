
// Problem: B. Batch Sort
// Contest: Codeforces - Intel Code Challenge Final Round (Div. 1 + Div. 2, Combined)
// URL: https://codeforces.com/problemset/problem/724/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int n,m,arr[30][30];

bool flag(){
    for(int i = 1; i <= n; i++) {
        int Count = 0;
        for(int j = 1; j <= m; j++) {
            if(arr[i][j] != j) Count++;
        }
        if(Count > 2) return 0;
    }
    return 1;
}

int main()
{
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++)
			cin >> arr[i][j];
	}
	
	if(flag()){
		cout << "YES" << endl;
		return 0;
	}
	
	for(int i = 1; i < m; i++){
            for(int j = i + 1; j <= m; j++){
                for(int k = 1; k <= n; k++)
                    swap(arr[k][i], arr[k][j]);
                if(flag()) {
                    printf("YES\n");
                    return 0;
                }
                for(int k = 1; k <= n; k++)
                    swap(arr[k][i], arr[k][j]);
        }
    }
        printf("NO\n");
}