#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> stk;
		for(int i=0;i<s.size();i++){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
				string fi=stk.top();stk.pop();
				string sp=stk.top();stk.pop();
				string tmp=s[i]+sp+fi;
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
		}
		cout<<stk.top()<<endl;
	}
	return 0;
}

