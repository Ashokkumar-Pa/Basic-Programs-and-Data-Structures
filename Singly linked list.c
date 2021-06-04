#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	struct clg
	{
		char dept[25];
		struct clg *next;
	};
	
	struct clg *first= NULL;
	struct clg *current= NULL;
		
 	while(true)
	{
		struct clg *newclg=(struct clg*)malloc(sizeof(struct clg));
		printf("Enter Department \n");
		scanf("%s",&newclg->dept);
		if(first != NULL)
		{
			current->next=newclg;
			current=newclg;
		}
		else
		{
			first = current =  newclg;
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
	
	char searchname[25];
	printf("Search name\n");
	scanf("%s",&searchname);
	struct clg* search = first;
	printf("department:");
	while(search != NULL)
	{
		if(strcmp (searchname,search->dept) ==0)
		{	
			printf("department: %s\n" ,search->dept);
			break;
		}
		search = search->next;
	}
}
