#include<iostream>
#include<string>
using namespace std;

int check(string s){
	int o = 0;
	int z = 0;
	int d= 0;
	for(char c : s){
		if(c == '1'){
			o++;
			if(z>0){
				d += z;
				z = 0;
			}
		}else{
			z++;
		}
	}
	return d;
}

int main(){
	string s;
	cin >> s;
	int check = check(s);
	cout << check;
	return 0;
}
