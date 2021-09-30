#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
class ll
{
    node *head;
public:
    ll()
    {
        head=nullptr;
    }
    void create(int a[],int n)
    {
        node*temp=nullptr;
        head=new node;
        head->data=a[0];
        head->next=nullptr;
        for(int i=1;i<n;i++)
        {
            temp=new node;
            temp->data=a[i];
            temp->next=head;
            head=temp;
        }
    }
    void ins(int key,int pos)
    {
        node*p=head;node*q=head;
        for(int i=0;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        cout<<q->data;
        cout<<p->data;
        node*temp=new node;
        temp->data=key;
        temp->next=q->next;
        q->next=temp;
    }
    void sortins(int key)
    {
        node*temp=new node;
        temp->data=key;
        temp->next=nullptr;
        node*q=head,*p=head;
        while(p && p->data>n)
        {
            q=p;
            p=p->next;
        }
        if(p==head)

    }
    void show()
    {
        node*temp=head;
        while(temp)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }

};
int main()
{
    int a[]={1,2,3,4,5,6,8};
    ll l1;
    l1.create(a,5);
    l1.show();
    l1.show();

}
