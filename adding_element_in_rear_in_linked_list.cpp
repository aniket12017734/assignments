#include<iostream>
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
struct node* addElement(struct node*head,int new_data)
{
  node*new_node=new node;
  new_node->data=new_data;
  new_node->next=NULL;
  if(head==NULL)
   {
  	head=new_node;
   }
  else
  {
   	struct node*ptrNode;
	for(ptrNode=head;ptrNode->next!=NULL;ptrNode=ptrNode->next)
	{}
	ptrNode->next=new_node;
  }
  return head;
}
int main()
{
    int n,key;
	struct node *head=NULL;
	cin>>n;
	for(int i=0;i<n;i++)
	{
    	cin>>key;
    	head=addElement(head,key);
	}
	display(head);                      
}