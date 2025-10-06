#include<iostream>
using namespace std;

int n;
int main(){
    cin >> n;
    int m[n];
    for(int i=0;i<n;i++){
        cin >> m[i];
    }
    int key,left ,right,middle;
    for(int i=0;i<n;i++){
        key = m[i];
        left = 0;
        right = i -1;
        while (left <=right)
        {
            /* code */
            middle = (left + right)/2;
            if(m[middle]>key){
                right = middle -1;
            }else{
                left = middle +1;
            }
        }
        for(int j=i-1;j>=left;j--){
            m[j+1] = m[j];
        }
        m[left] = key;
    }
    for(int i=0;i<n;i++){
        cout << m[i];
    }   
    return 0;
}

/*
void BinaryInsertSort(int arr[], int len){
    int key,left,right,middle;
    for(int i=1;i<len;i++){
        key = arr[i];
        left = 0;
        right = i-1;
        while (left<=right)
        { 
            middle = (left+right)/2;
            if(arr[middle]>key){
                right = middle -1;
            }else{
                left =  middle + 1;
            }
        }
        for(int j = i-1;j>=left;j--){
            arr[j+1] = arr[j];
        }
        arr[left] = key;
    }
}
*/