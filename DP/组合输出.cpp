#include<iostream>
#include<iomanip>
using namespace std;
int n,r,a[22];
void print()
{
	for(int i=1;i<=r;i++)
		cout<<setw(3)<<a[i];
	cout<<endl;
}
void dfs(int now,int wei)
{
	if(wei==r+1)
	{
		print();
		return;
	}
	for(int i=now+1;i<=n-r+wei;i++)
	{
		a[wei]=i;
		dfs(i,wei+1);
	}
}
int main()
{
	cin>>n>>r;
	dfs(0,1);
	return 0;
}
