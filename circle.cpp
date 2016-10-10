#include<iostream> 
#include<cmath>
using namespace std;
const int k=4;
const int n=pow(2,k);

int a[n+1][n+1];

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
		for(int i=m+1;i<=r;) 
		
	}
}
int main(){

	
	return 0;
}
