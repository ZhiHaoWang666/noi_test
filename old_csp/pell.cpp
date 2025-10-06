#include<iostream>
#include<string>
using namespace std;

string GOJINGDUJIAFA(string s1,string s2){
	int a[250],b[250],c[500];
	int len;
	string s3;
	for(int i=0;i<=s1.size();i++){
		a[s1.size()-1-i] = s1[i]-'0';
	} for(int i=0;i<=s2.size();i++){
		b[s2.size()-1-i] = s2[i]-'0';
	}
	
	len = s1.size();    
	
	if(s1.size()<s2.size()){
		len = s2.size();
	}
	
	for(int i=0;i<len;i++){
		c[i] = a[i]+b[i];
	}
	
	for(int i=0;i<len;i++){
		if(c[i]>=10){
			c[i+1] = c[i+1]+c[i]/10;
			c[i] = c[i]%10;
		} 
}
	if(c[len] != 0){
		len ++;
	}
	for(int i=len-1;i>=0;i--){
		s3[i]=s3[i]+(c[i]-'0');
	}
	return s3;
}
string GAPJINGDUCHENGFA(string s1){
	
int i,b,p,a[250];
	
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
	return s1;
}
int main(){
	int n;
	cin >> n;
	string z;
	//P[n] = 2*P[n-1] + P[n-2]
	string s1 = "1";
	string s2 = "2";
	if(n==1){
		cout << s1;
	}else if(n==2){
		cout << s2;
	}else{
		for(int i=3;i<=n;i++){
			string s3 = GOJINGDUJIAFA(GAPJINGDUCHENGFA(s1),s2);
			s1 = s2;
			s2 = z;
		}
		cout << z;
	}
	return 0;
}