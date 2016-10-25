#include<iostream>
#include<cstdio>

using namespace std;

const int N=1010;

template <typename Type>

void mergeSort(Type *a,int n){
	
	
}
int main(){
	int a[N];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	mergeSort(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
