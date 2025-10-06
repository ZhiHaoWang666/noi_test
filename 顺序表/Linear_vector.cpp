#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	
	for(int i=1;i<=5;i++){
		v.push_back(i);
	}for(int i=1;i<=5;i++){
		v.insert(v.begin(), i);
	}
	
	cout << v.size();
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	v.erase(v.begin()+3);
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	v.insert(v.begin(),9);
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	if(!v.empty()){
		v.clear();
	}
	printf("v.empty() = %s\n", v.empty()?"true":"false");
	return 0;
}
