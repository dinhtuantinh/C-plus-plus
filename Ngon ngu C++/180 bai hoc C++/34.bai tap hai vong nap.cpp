#include<iostream>
#include<math.h>

//tinh S(x,n)=x+(x^2)/2!+....+(x^n)/n!

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	double x;
	int n;
	double s=0;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	/*cach 1
	for(int i=1;i<=n;i++){
		double tu=pow(x,i);
		int mau=1;
		for(int j=1;j<=i;j++){
			mau=mau*j;
		}
		s=s+tu/mau;
	}
	cout<<"s("<<x<<","<<n<<")="<<s;
	*/
	int mau=1;
	for(int i=1;i<=n;i++){
		double tu=pow(x,i);
		mau=mau*i;	
		s=s+tu/mau;
	}
	
	cout<<"s("<<x<<","<<n<<")="<<s;
	return 0;
}


