#include<iostream>
#include<cstdio>
using namespace std;

    int a[100];
bool find(int x,int t){
    int i,j;
    j=lower_bound(a,a+100,x)-a;
    if(a[j]>x)--j;
    for(int k=j;k>0;k--){
    int dx=x-a[k];
    i=lower_bound(a,a+k,dx)-a;
    if(a[i]==dx)return true;
    }
    return false;
}
int main(){
    for(int i=0;i<100;++i)a[i]=i;
    int x;
    cin>>x;
   cout<< find(x,1)<<endl;
    return 0;
}
