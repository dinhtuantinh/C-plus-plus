#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, k, a[100005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ok=lower_bound(a+1,a+n+1,k)-a;
		if(a[ok]==k) cout<<ok;
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

