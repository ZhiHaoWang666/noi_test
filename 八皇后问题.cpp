#include<iostream>
#include<cstdio>
using namespace std;
const int maxN=10;

int now[maxN];
int ans[maxN];
//now[i]，i这一列（竖着的）哪一层放上了皇后。
//i这一层的哪一列放上了皇后
int n=8;
int cnt;

void dfs(int x)
{
    if(x==9)
    {
        printf("No.%d\n",++cnt);
        for(int j=1;j<=n;++j)
        {
            for(int i=1;i<=n;++i)
            {
                if(ans[i]!=j)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            printf("\n");
        }
        return ;
    }
    for(int i=1;i<=n;++i)
    {
        if(now[i]!=0)
        {
            continue;
        }
        
        bool flag=0;
        for(int j=1;j<x;++j)
        {
            if((x-j)==(i-ans[j]))
            {
                flag=1;
                break;
            }
            if((x+i)==(j+ans[j]))
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            continue;
        }

        now[i]=x;//now[i]
        ans[x]=i;

        dfs(x+1);

        now[i]=0;
        ans[x]=0;
    }
    return ;
}


int main()
{
    dfs(1);
}