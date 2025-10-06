#include<iostream>
using namespace std;
int var[101];
int n,m;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    int key,left ,right,middle;
    for(int i=0;i<n;i++){
        key = var[i];
        left = 0;
        right = i -1;
        while (left <=right)
        {
            /* code */
            middle = (left + right)/2;
            if(var[middle]>key){
                right = middle -1;
            }else{
                left = middle +1;
            }
        }
        for(int j=i-1;j>=left;j--){
            var[j+1] = var[j];
        }
        var[left] = key;
    }
    cin >> m;
    cout << var[m-1];   
    return 0;
}