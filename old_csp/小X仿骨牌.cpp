#include<iostream>
#include<string>
using namespace std;

int i,b,p,a[250];
string s1;

int main(){
	cin >> s1 >> b;
	for(i=1;i<=s1.size();i++){
		a[s1.size()-1-i] = s1[i]-'0';
	}
	for(int i=1;i<s1.size();i++){
		a[i] = a[i] * b;
	}
	for(int i=1;i<s1.size()+4;i++){
		if(a[i]>=10){
			a[i+1] = a[i+1]+a[i]/10;
			a[i] = a[i]%10;
		} 
	}
	for(i=s1.size()+4;i>=1;i--){
		if(a[i] != 0){
			p=i;
			break;
		}
	
	}
	for(int i=p;i>=1;i--){
		cout << a[i];
	}
	return 0;
}