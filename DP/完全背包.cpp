#include <iostream>
#include <cstdio>
using namespace std;
int v[201],w[201],f[201][201];
int m,n;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(w[i]>j)
			{
				f[i][j]=f[i-1][j];
			}
			else
			{
				f[i][j]=max(f[i-1][j],f[i][j-w[i]]+v[i]);
			}
		}
	}
	cout<<"max="<<f[n][m];
	return 0;
}
