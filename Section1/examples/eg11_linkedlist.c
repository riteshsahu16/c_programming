#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype{
	int data;
	struct node_type *next;
}node;

typedef node * list;

int main()
{
	list head, temp;
	char ch;
	int n;
	head = NULL;
	printf("Enter data? (y/n)\n");
	scanf("%c", &ch);fflush(stdin);
	while(ch == 'y' || ch == 'Y')
	{
		printf("Give data: ");
		scanf("%d", &n);
		temp = (list) malloc(sizeof(node));
		temp -> data = n;
		temp -> next = head;
		head = temp;
		printf("Enter more data? (y/n)\n");
		scanf("\n%c", &ch); fflush(stdin);
	}
	temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
	return 0;
}
