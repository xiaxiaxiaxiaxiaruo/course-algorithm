/*********************************************************
    > File Name: N_Queen.cpp
  > Author: Jing
  > Mail: 
  > Created Time: 二 11/29 10:30:19 2016
 ***********************************************/

#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;

const int N=100;
const int inf=0x3f3f3f3f;
int ans;
int a[N];
int n;
int ld[2*N],rd[2*N];

void init(int n){
    ans=0;
    for(int i=0;i<n;i++)a[i]=i;
    memset(ld,0,sizeof(ld));
    memset(rd,0,sizeof rd);
}
void find(){
    int k=0;
    int j;
    while(k>=0){
	j=k;
	if(j<n){
	    swap(a[k],a[j]);
	}
    }
}
void find(){
    for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
	    swap(a[i],a[j]);
//	    if(!ld[i-a[i]+n]&&!rd[i+a[i]]){
//		ld[i-a[i]+n]=1;
//		rd[i+a[i]]=1;
//	    }

	}
    }
}
int main(){
    while(cin>>n){
	init(n);
	find(0);
	cout<<"result:"<<ans<<endl;
    }
return 0;
}

/*
void find(int k){
    if(k==n){
	ans++;
	return;
    }
    for(int i=k;i<n;i++){
	swap(a[k],a[i]);
	if(!ld[k-a[k]+n]&&!rd[k+a[k]]){
	    ld[k-a[k]+n]=1;
	    rd[k+a[k]]=1;
	    find(k+1);
	    ld[k-a[k]+n]=0;
	    rd[k+a[k]]=0;
	}
	swap(a[k],a[i]);
    }
}
 */
/*
void find(int row,int ld,int rd){
    if(row==bit){
	ans++;
	return;
    }
    int pos=row|ld|rd;
    pos=bit&~pos;
    int p;
    while(pos){
	p=pos&-pos;
	pos-=p;
	find(row|p,(ld|p)>>1,(rd|p)<<1);
    }
}
*/
/*
void find(int n){
    int pos=row|ld|rd;
    pos=(~pos)&bit;
    int p;
    if(n==0){
	ans++;
	return;
    }
    while(pos){
	p=pos&-pos;
	pos-=p;
	row|=p;
	ld=(ld|p)>>1;//所有主对角线标记一起右移
	rd=(rd|p)<<1;
	find(n-1);
	row-=p;
	ld=(ld<<1)-p;//回退有问题，被删掉的1无法恢复，只能传参数表示状态
	rd=(rd>>1)-p;
    }
}
*/
