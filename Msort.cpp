#include<iostream>
#include<cstdio>

using namespace std;

const int N=1010;

template <typename Type>


	
void merge(Type *a,int l,int mid,int r){
	int i=l;
	int j=mid;
	Type *b;
	
	b=new Type[r-l];
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
template <typename Type>
void mergeSort(Type *a,int n){
	 int i,s=2;
	 while(s<=n){
	 	i=0;
	 	while(i+s<=n){
	 		merge(a,i,(i*2+s)/2,i+s);
	 		i+=s;
	 	}
	 	merge(a,i,(i+n)/2,n);
	 	s*=2;
	 }
	 merge(a,0,s/2,n);
	
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
