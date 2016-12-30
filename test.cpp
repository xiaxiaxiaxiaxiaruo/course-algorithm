/*********************************************************
    > File Name: test.cpp
  > Author: Jing
  > Mail: 
  > Created Time: 四 11/17 14:43:34 2016
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

int main(){
    string s;
    s="antiJ937";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
	cout<<s<<endl;
    }
 return 0;
}
