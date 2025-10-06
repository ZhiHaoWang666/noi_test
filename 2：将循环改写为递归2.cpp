#include<bits/stdc++.h>
using namespace std;
 
int n;
int func(int i){
	if(i<=n){
		return i+func(i+1);
	}
	else{
		return 0;
	}
}

int main()
{
	cin>>n;
	cout<<func(1);
	return 0;
}

