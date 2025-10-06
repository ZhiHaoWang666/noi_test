#include<iostream>
using namespace std; 
int n,s,k;
int main(){
    cin >> n;
    int var[n];
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    for(int i=0;i<n;i++)
    {
        while (var[i]!=0)
        {
            /* code */
            s+=var[i]%10;
            var[i] = var[i]/10;
        }
        var[i]=s;
        
    }
    for(int i=0;i<n;i++){
        k=i;
        for(int j=i+1;j<n;j++){
            if(var[k]>var[j]){
                k=j;
            }
        }
        if(k!=i){
            swap(var[k],var[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout << var[i] << " ";
    }
    
    return 0;
    
}

