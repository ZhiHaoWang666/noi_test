#include<iostream>
using namespace std;

string s1,s2;
int a[250],b[250],c[250],p;
char f='+';

int main(){
	cin >> s1 >> s2;
	if(s1.size()>s2.size()||(s1.size()==s2.size()&&s1<s2)){
		f='-';
		swap(s1,s2);
	}
	for(int i=1;i<=s1.size();i++){
		a[s1.size()-1-i] = s1[i]-'0';
	}
	for(int i=1;i<=s2.size();i++){
		b[s2.size()-1-i] = s2[i]-'0';	
	}

	for(int i = 1;i<s1.size();i++){
		if(a[i]<b[i]){
			a[i] = a[i] + 10;
			a[i+1] = a[i+1] -1;
		}
		c[i] = a[i]-b[i];
	} 

	if(f == '-'){
		cout << f;
	}

	for(i=s1.size();i>=0;i--){
		if(c[i]!=0){
			p=i;
			break;
		}
	}
	
	for(i=p;i>=0;i++){
		cout << c[i];
	}

	return 0;
}