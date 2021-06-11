#include<stdio.h>
#include<stdbool.h>
struct num 
{
	int data;
	struct num* next;
};
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
	three->data = 5;
	four->data = 7;
	
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;
	
	int index = 2;
	int count = 0;
	
	struct num* current= one;
	while(current != NULL)
	{
		if(count>index)
		{
			printf("true");
			return;
		}
		count++;
		current = current->next;
	}
	printf("false");
}
