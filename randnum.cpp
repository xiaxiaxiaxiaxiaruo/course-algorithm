#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
	int n=rand()%100;
	int a;
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		a=rand()%10000;
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}
