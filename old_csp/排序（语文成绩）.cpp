//
//  排序（语文成绩东方）.cpp
//  study_cpp
//
//  Created by 王祉皓 on 2023/7/25.
//

#include<iostream>
using namespace std;

int score[101];
int n,s_score,num,search;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> score[i];
    }
    for(int i=0;i<n;i++){
        s_score = score[i]+score[i+1];
    }
    num = s_score/n;
    int key,left ,right,middle;
        for(int i=0;i<n;i++){
            key = score[i];
            left = 0;
            right = i -1;
            while (left <=right)
            {
                /* code */
                middle = (left + right)/2;
                if(score[middle]>key){
                    right = middle -1;
                }else{
                    left = middle +1;
                }
            }
            for(int j=i-1;j>=left;j--){
                score[j+1] = score[j];
            }
            score[left] = key;
        }
    cout << s_score << num;
    for(int i=0;i<n;i++){
        cout << " "<<score[i];
    }
    return 0;
}
