// Get string in linked list and print reversly using recursion 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct string
{
	char data[9];
	struct string* next;
};

void reverse(struct string *node)
{
   if (node != NULL)
   {
       reverse(node->next);
       printf("%s ",node->data);
   }
}

int main()
{
   struct string* first=NULL;
   struct string* current=NULL;
   while(true)
   {
   		struct string* newstring=(struct string*)malloc (sizeof(struct string));
   		printf("\nEnter the data :");
   		scanf("%s",&newstring->data);
   		if(first != NULL)
   		{
   			current->next=newstring;
   			current=newstring;
	    }
	    else
	    {
	    	first = current= newstring;
		}
		char option[3];
		printf("Do you want to continue YES or NO ?\n");
		scanf("%s",&option);
		if(strcmp(option,"no")==0)
		{
			current->next = NULL;
			break;
		}
   }
   reverse(first);
}
