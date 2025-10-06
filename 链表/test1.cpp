#include<iostream>
using namespace std;

/*链表的概念：
链表是一种物理存储结构上非连续 非顺序的存储结构
链表中的每个结点不是只单纯的存一个数据。而是一个结构体，
结构体成员包括一个所存的数据
，和下一个结点的地址
包括节点和地址
*/
//链表是不连续的
//创建单项链表 

struct ListNode
{
    /* data */
    int val;
    struct ListNode *next;   //定义下一个节点
    ListNode(int x):    //定义节点
        val(x),next(NULL){    // 节点的值和地址
        }
    
};


int main(){
    int num;
    cin >> num;
    //创建头节点head，并且将当前结点p指向头结点（p=head）
    ListNode *head = new ListNode(num);
    ListNode *p = head;

    //利用尾插法创建一个链表

    while(cin >> num){
            ListNode *q = new ListNode(num);  //创建一个新的节点
            p -> next  = q;  //将新的节点添加到链表的末尾
            p = p -> next;   //update p
    }

    //遍历链表输出元素

    ListNode *m = head;
    while (m != nullptr)
    {
        /* code */
        cout << m ->val << endl;
        m = m -> next; 
    }
    


    return 0;
}
