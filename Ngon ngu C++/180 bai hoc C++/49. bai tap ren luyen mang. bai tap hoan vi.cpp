#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
/*cach 1
	srand(time(NULL));
	int m,n;
	cout<<"Nhap so dong:";
	cin>>m;
	cout<<"Nhap so sot:";
	cin>>n;
	int M[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			M[i][j]=rand()%100;
		}
	}
	cout<<"Ma tran sau khi nhap:\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
*/
	//cach 1
	int m,n;
	cout<<"Nhap so hang:";
	cin>>m;
	cout<<"Nhap so cot:";
	cin>>n;
	int M[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"M["<<i<<"]["<<j<<"]=";
			cin>>M[i][j];
		}
		cout<<"\n";
	}
	cout<<"Mang sau khi nhap:\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
	int MT[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			MT[j][i]=M[i][j];
		}
	}
	cout<<"Ma tran hoan vi:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<MT[i][j]<<"\t";	
		}
		cout<<endl;
	}
	return 0;
}


