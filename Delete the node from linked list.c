#include<stdio.h>
struct node
{
	int n;
	struct node* next;
};

//	construct Linked list from array
struct node* constructLinkedList(int a[],int len)
{
	int i;
	struct node* first = malloc(sizeof(struct node));
	first->n = a[0];
	struct node* current= first;
	for(i=1; i<len; i++)
	{
		struct node* newst = malloc(sizeof(struct node));
		newst->n= a[i];
		current->next= newst;
		current = current->next;
	}
	current->next = NULL;
	return first;
}

//	Delete the node from the list
struct node* DeleteNode(struct node* temp, int del)
{
	//	find the where 
	while( temp->next->n != del)
	{
		temp = temp->next;
	}
	temp->next = temp->next->next;
}
int main()
{
	int a[]= {1,2,3,4,9,5,6};
	int len = sizeof a/sizeof a[0];
	
	printf("Before Delete the node\n");
	struct node* one = constructLinkedList(a,len);
	struct node* out = one;
	while( out !=NULL)
	{
		printf("%d ",out->n);
		out = out->next;
	}
	
	printf("\nAfter Delete the node\n");
	DeleteNode( one, 9 );
	out = one;	
	while( out !=NULL)
	{
		printf("%d ",out->n);
		out = out->next;
	}
}
