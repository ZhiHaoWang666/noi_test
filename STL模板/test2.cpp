#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
}

int main(){
	int var[] = {10,20,30,40,50};
	cout << sizeof(var)/sizeof(int) << endl;
	vector<int> v(var,var+sizeof(var)/sizeof(int));
	v.push_back(10);
	print(v);
	return 0;
}