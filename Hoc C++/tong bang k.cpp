#include<bits/stdc++.h>
using namespace std;

int a[1005], f[1005];
int n, k;
int m=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n; i++)
			cin>>a[i];
		memset(f, 0, sizeof(f));
		f[0]=1;
		for(int i=1; i<=k; i++)
			for(int j=0; j<n; j++)
				if(i>=a[j])
					f[i]=(f[i]+f[i-a[j]])%m;
		cout<<f[k]<<endl;
	}
	return 0;
}

