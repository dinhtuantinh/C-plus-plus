//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long
//string a,b;
//int n,m;
//void Nhap(){
//	cin>>a>>b;
//	n=a.length();
//	m=b.length();
//}
//void ins(string a,string b){
//	vector <int> c,d;
//	n=a.length();m=b.length();
//	for(int i=0;i<n;i++) d.push_back(a[i]-'0');
//	for(int i=0;i<n-m;i++) c.push_back(0);
//	for(int i=0;i<m;i++) c.push_back(b[i]-'0'); 
//	int nho=0;
//	for(int i=n-1;i>=0;i--){
//		d[i]-=nho;
//		if(d[i]<c[i]){
//			d[i]=d[i]+10-c[i];
//			nho=1;
//		}
//		else{
//			d[i]=d[i]-c[i];nho=0;
//		}
//	}
//	for(int j=0;j<d.size();j++) cout<<d[j];
//	cout<<endl;
//}
//void Res(){
//	if(n>m) ins(a,b);
//	else if(n<m) ins(b,a);
//	else{
//		if(a>b) ins(a,b);
//		else ins(b,a);
//	}
//}
// 
//int main(){
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int test;
//	cin>>test;
//	while(test--){
//		Nhap();
//		Res();
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string a,b;
//		int nho=0, so=0;
//		string tmp=" "; 
//		cin>>a>>b; 
//		while(a.size()<b.size()) a='0'+a;
//		while(a.size()>b.size()) b='0'+b;
//		if(a<b) a.swap(b);
//		for(int i= a.size()-1; i>=0; i--){
//			so=a[i]-b[i]-nho;
//			if(so<0){
//				so+=10;
//				tmp=char(so%10+'0')+tmp;
//				nho=1;
//			}else{
//				tmp=char(so+'0')+tmp;
//				nho=0;	
//			}		
//		}
//		if(nho>0) tmp=char(nho+'0')+tmp;
//		cout<<tmp<<endl;
//	}
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		while(a.size()<b.size()) a='0'+a;
		while(a.size()>b.size()) b='0'+b;
		string tmp=" ";
		int so=0,nho=0;
		if(a<b) a.swap(b);
		for(int i=a.size()-1;i>=0;i--){
			so=a[i]-b[i]-nho;
			if(so<0){
				so+=10;
				tmp=char(so%10+'0')+tmp;
				nho=1;
			}
			else{
				tmp=char(so%10+'0')+tmp;
				nho=0;
			}
		}
		if(nho>0) tmp=char(so%10+'0')+tmp;
		cout<<tmp<<endl;
	}
	return 0;
}





