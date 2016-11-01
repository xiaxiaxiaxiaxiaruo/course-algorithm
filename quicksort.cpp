#include<iostream>
#include<cstdio>

using namespace std;

template <typename T>
void quicksort(T a[],int l,int r){
    int i=l,j=r,m=rand()%(r-l+1)+l;
    T mid=a[m],t;
    while(i<j){
	while(i<r&&a[i]<mid)++i;
	while(j>l&&a[j]>mid)--j;
	if(i<=j){
	    t=a[i];a[i]=a[j];a[j]=t;
	    ++i;--j;
	}
    }
    if(l<j)quicksort(a,l,j);
    if(i<r)quicksort(a,i,r);
}
int main(){
    int a[10]={0,9,8,7,6,5,4,3,2,1 };
    char ch[10]={'a','s','d','f','g','h','g','j','k','l'};
    quicksort(a,0,9);
    quicksort(ch,0,9);
    for(int i=0;i<10;i++)printf("%d%c",a[i]," \n"[i==9]);
    for(int i=0;i<10;i++)printf("%c%c",ch[i]," \n"[i==9]);
    return 0;
}
