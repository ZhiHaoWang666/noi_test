#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node *next;
};

Node *head = NULL;

void add(int x){
    if(head != NULL){
        Node *a = new Node;
        a->data = x;
        a->next = NULL;

        Node *p = head;
        while (p->next != NULL)
        {
            /* code */
            p = p->next;
            
        }
        p->next = a;
    }else{
        head = new Node;
        head->data = x;
        head->next = NULL;
    }

}
void insert(int x,int n){
    Node *d = new Node;
    d->data = x;
    d->data = NULL;

    if(n==1){
        d->next = head;
        head = d;       //在头指针插入节点
    }else{
        Node *p = head; 
        for(int i=0;i<=n-2;i++){
            p = p->next;
            if(p->next==NULL){
                break;
            }
        }
        if(p->next == NULL){
            cout << "False" << endl;
            return;
        }else{
            d->next = p->next;
            p->next = d;
        }
    }
}

void deldata(int data){
    Node *p = head,*pre = NULL;
    while(p->next != NULL){
        if(p->data == data){
            if(p->data == data){
                if(p == head){
                    head = p->next;
                }else{
                    pre->next = p->next;
                }
                delete p;
                break;
            }
        }
        pre = p;
        p = p->next;
    }
}

void delposn(int n){
    Node *p = head, *t;
    if(n == 1){
        if(head != NULL){
            head = p->next;
            delete p;
        }else{
            cout << "empty list" << endl;
            return;
        }
    }else{
            for(int i=1;i<=n-2;i++){
                p = p->next;
                if(p == NULL){
                    break;
                }
            }
            if(p == NULL || p->next == NULL){
                cout << "out of list" << endl;
                return;
            }else{
                t = p->next;
                p->next = t->next;
                delete t;
            }
    }
}   

void display(){
    Node *p = head;
    while(p!=NULL){
        cout << p ->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    int num;
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    cin >> num;
    add(x);
    add(y);
    add(z);
    display();
    deldata(5);
    display();
    insert(3,10);
    display();
    delposn(2);
    display();

    return 0;
}