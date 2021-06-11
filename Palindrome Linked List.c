#include<stdio.h>
#include<stdbool.h>
struct num 
{
	int data;
	struct num* next;
};
struct num* printList(struct num* first, struct num* p)
{	
	if(p == NULL)
	{
		return first;
	}
	struct num* toReturn = printList(first, p->next);
	if(toReturn->data != p->data)
	{
		printf("It is not a palindrome");
		return 0;
	}
	printf("%d ", toReturn->data);
	printf("%d\n", p->data);
	return toReturn->next;
}
int main()	
{
	
	// memory Allocation
	struct num* one = malloc(sizeof(struct num));
	struct num* two = malloc(sizeof(struct num));
	struct num* three = malloc(sizeof(struct num));
	struct num* four = malloc(sizeof(struct num));
	
	// Data initialize
	one->data = 1;
	two->data = 2;
	three->data = 2;
	four->data = 3;
	
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;
	
	printList(one, one);
}
