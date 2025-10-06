#include<iostream>
using namespace std;
int x,y,z;
int main(){
    for(int x=1;x<=20;x++){
        for(int y =1;y<=33;y++){
            for(int z=1;z<=300;z++){
                if(x+y+z==100 && 5*x+3*y+1.0*(1/3)*z == 100){
                    cout << " " << x <<" "<< y<< " " << z << " "<<endl;       
                }
            }
        }
    }
    return 0;
}