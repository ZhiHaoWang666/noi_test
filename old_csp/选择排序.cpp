#include<iostream>
using namespace std;
int a[15],i,j,n,k;
int main(){
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];  //进行录入
    for(i=0;i<n;i++)//开始排序
    {
        k=i;            
        for(j=i+1;j<n;j++) //i+1   从数组的后一项开始排序
        {
            if(a[k]>a[j]){  //判断是否大于或者小于
                k=j;
            }
        }
        if(k!=i)
        {
            swap(a[k],a[i]); //如果大于，进行交换
        }

    }
    for(i=0;i<n;i++){
        cout << a[i] << endl;   //输出
    }
    return 0;
}