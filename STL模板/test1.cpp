#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	int i;

	cout << v.size()<<endl;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << v.size()<<endl;

	for(i=0;i<v.size();i++){
		cout << v[i] << endl;
	}
	return 0;
}