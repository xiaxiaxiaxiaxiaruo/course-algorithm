#include<iostream> 
#include<cmath>
using namespace std;
const int k=3;
const int n=pow(2,k);

int a[1024][1024];

void f(int l,int r){
	if(r-l==1){
		a[1][l]=a[2][r]=l;
		a[2][l]=a[1][r]=r;
	}
	else{
		int m=(l+r)/2;
		f(l,m);
		f(m+1,r);
		//右下=左上 
		for(int i=l;i<=m;i++){
			for(int j=l;j<=m;j++){
				a[i+m][j+m]=a[i][j];
			}
		}
		//左下=右上
		for(int i=m+1;i<=r;i++){
		    for(int j=l;j<=m;j++){
			a[i][j]=a[i-m][j+m];

		    }
		}
		
	}
}
int main(){
	f(1,n);
	for(int i=1;i<=n;i++){

	for(int j=1;j<=n;j++){
	    cout<<a[i][j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}
