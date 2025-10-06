#include<bits/stdc++.h>
using namespace std;
 
int n,s;
void func(int i){
	if(i<=n){
		s=s+i;
		func(i+1);
	}
}
int main()
{ 
	cin>>n;
	func(1);
	cout<<s;
	return 0;
}

