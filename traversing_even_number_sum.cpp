#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *ptrNode;
    for(ptrNode=head; ptrNode->next!=NULL;ptrNode=ptrNode->next)
    {
        cout<<ptrNode->data<<"->";
    }
    cout<<ptrNode->data<<endl;
}
void SumEven(struct node *head)
{
    int sumEven=0;
    node *ptr=head;
    for(ptr=head; ptr->next!=NULL;ptr=ptr->next)
    {
        if(ptr->data%2==0)
        {
            sumEven+=ptr->data;
        }
    }
    if(ptr->data%2==0)
    {
        sumEven=sumEven+ptr->data;
    }
    
    if(sumEven==0)
    {
        cout<<"No even number"<<endl;
    }
    else
    {
        cout<<sumEven<<endl;
    }
}
struct node* pushElement(struct node *head, int new_data)
{
    node* new_node = new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
    return(head);
}
int main()
{
    int n,key;
    struct node *head=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        head=pushElement(head,key);
    }

    SumEven(head);                    
}
