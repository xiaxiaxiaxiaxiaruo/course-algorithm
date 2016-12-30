/*********************************************************
    > File Name: divide.cpp
  > Author: Jing
  > Mail: 
  > Created Time: 二 11/29 19:29:15 2016
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

const int N=100+5;
const int inf=0x3f3f3f3f;
int lef,righ;
int w[N];
int n;
void devide(int k,int lw,int ln,int rw,int rn,int rewit )
{
    if(k==n){
	if(abs(lw-rw)<abs(righ-lef)){
	    lef=lw;
	    righ=rw;
	}
	return;
    }
    if(ln>(n/2+1)||rn>(n/2+1)){
	return;
    }
    if(abs(lw-rw)>rewit)return;
    devide(k+1,lw+w[k],ln+1,rw,rn,rewit-w[k]);
    devide(k+1,lw,ln,rw+w[k],rn+1,rewit-w[k]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
	cin>>n;
	int sum=0;
	lef=0;righ=inf;
	for(int i=0;i<n;++i){
	    scanf("%d",w+i);
	    sum+=w[i];
	}
	devide(0,0,0,0,0,sum);
	cout<<"answer:"<<lef<<" "<<righ<<endl;
    }
 return 0;
}
