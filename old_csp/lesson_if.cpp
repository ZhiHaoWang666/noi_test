#include<iostream>
using namespace std;
int main(){
    /*
    ==
    <=
    >=
    !=
    */
   //带来一些钱，不知道够不够（随机输入），判断能买的东西
   //1.钢笔9元
   //2.书包22元
   //3.铅笔元1元
   //选择，判断
   /*if(条件){
       ...
   }else if(条件){

   }else{

   }*/
   while(true){
    int money;
    cin >> money;
    int pen = 9;int bag = 22;int pencil = 1;
    int choose;
    cin >> choose;
    if(choose > 3){
        cout << "erro";
    }else{
        if(money >= pen || money >= bag|| money >= pencil){
            cout << "y";
            break;
        }else{
            cout << "n";
            break;
        }
    }
}
    return 0;
}