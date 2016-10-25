#include<iostream>
#include<cstdio>

using namespace std;
const int N=1010;
int a[N];
void merge(int l,int mid,int r){
	int i=l;
	int j=mid;
	int *b;
	
	b=new int[r-l];
	int *p=b;
	while(i<mid&&j<r){
		if(a[i]<=a[j]){
			*b++=a[i++];
		}
		else *b++=a[j++];
	}
	while(i<mid){
		*b++=a[i++]	;
	}
    while(j<r){
    	*b++=a[j++];
}
    b=p;
    for(i=l;i<r;++i){
    	a[i]=*p++;
    }
	
	delete [] b;
}
void mergesort(int l,int r){
	if(r-l<=1)return;
	else{
		mergesort(l,(l+r)/2);
		mergesort((l+r)/2,r);
		merge(l,(l+r)/2,r);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	mergesort(0,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;	
} 
