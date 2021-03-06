#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void BFS_Queue(int v,int**a,int n,bool*visited){
	queue<int>queue;
	queue.push(v);
	visited[v]=true;
	while(!queue.empty()){
		v=queue.front();
		queue.pop();
		for(int i=0;i<n;i++){
			if(a[v][i]==1&&!visited[i]){
				visited[i]=true;
				queue.push(i);
			}
		}
	}
}
int TPLT(int**a,int n,bool*visited){
	int nurn=0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			nurn++;
			BFS_Queue(i,a,n,visited);
		}
	}
	return nurn;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int v,e,**a;cin>>v>>e;
		bool visited[v]={};
		a=new int*[v];
		for(int i=0;i<v;i++){
			a[i]=new int[v];
		}
		for(int i=0;i<e;i++){
			int begin,end;
			cin>>begin>>end;
			if(begin<=v&&begin>=0&&end>=0&&end<=v){
				a[begin-1][end-1]=1;
				a[end-1][begin-1]=1;
			}
		}
		cout<<TPLT(a,v,visited)<<endl;
	}
	return 0;
}

