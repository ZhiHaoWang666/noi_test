#include<iostream>
using namespace std;

const int N = 1e6;

struct List {
    int data[N];
    int size; 

    List() {
        size = 0;
    }

    int insert(int value, int pos = -1); 
    int remove(int pos = -1); 
    int get(int pos) const;
};

int List::insert(int value, int pos) {
    if (size == N) {
        return -1; // 满了，无法插入
    }
    if (pos < 0 || pos > size) { // 检查插入位置的合法性
        pos = size;
    }
    for (int i = size - 1; i >= pos; i--) { // 将插入位置之后的元素往后移动
        data[i + 1] = data[i];
    }
    data[pos] = value;
    size++;
    return pos;
}

int List::remove(int pos) {
    if (size == 0) {
        return -1; // 空的，无法删除
    }
    if (pos < 0 || pos >= size) { // 检查删除位置的合法性
        pos = size - 1;
    }
    int t = data[pos];
    for (int i = pos + 1; i < size; i++) { // 将删除位置之后的元素往前移动
        data[i - 1] = data[i];
    }
    size--;
    return t;    
}

int List::get(int pos) const {
    if (pos < 0 || pos >= size) {
        cout << "Position error" << endl; // 位置错误
        return -1;
    }
    return data[pos];
}

int main() {
    List myList;
    myList.insert(6, 0);
    myList.insert(3, 1);
    myList.remove();
    cout << myList.get(1) << endl;      
    return 0;
}
		