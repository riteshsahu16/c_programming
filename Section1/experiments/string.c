/*
input string of varid length  & print it. #LInked List Implementation!!!
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype{
	char data;
	struct nodetype *next;
}node;

typedef  node * list;

int main()
{
	list head, temp;
	int c = getchar();
	head = (list) malloc(sizeof(node));
	head -> data = c;
	head -> next = NULL;
	while ((c != getchar()) != 'X')
	{
		 temp = (list) malloc(sizeof(node));
		 temp -> data = c;
		 temp -> next = NULL;
		 head = temp;
	}
	while (temp != NULL)
	{
		putchar(temp -> data);
		temp = temp -> next;
	}
}
