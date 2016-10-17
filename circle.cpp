#include<cstdio>
#include<iostream> 
#include<cmath>
using namespace std;
const int k=4;
const int n=pow(2,k);

int a[1024][1024];

void f(int l,int r,int n){
	
	if(r-l==1){
		a[1][l]=a[2][r]=l;
		a[2][l]=a[1][r]=r;
	}
	else{
		int m=(l+r)/2;
		int d=n/2;
		f(l,m,m-l+1);
		f(m+1,r,r-m);
		//右下=左上 
		for(int i=1;i<=d;i++){
			int x=i+d;
			for(int j=l;j<=m;j++){
				int y=j+d;
				a[x][y]=a[i][j];
			}
		}
		//左下=右上
		for(int i=1;i<=d;i++){
			int x=i+d;
		    for(int j=l;j<=m;j++){
			a[x][j]=a[i][j+d];

		    }
		}
		
	}
}
int main(){
	f(1,n,n);
	for(int i=1;i<=n;i++){

	for(int j=1;j<=n;j++){
	    printf("%3d ",a[i][j]);
	}
	cout<<endl;
	}
	return 0;
}
