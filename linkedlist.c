/* Program to show linked list
* Author: Giriraj Khatri
* Roll No. : 0509
* Date: July 29,2016
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
typedef struct node *nodeptr;
nodeptr getnode();
void freenode(nodeptr);
void insertatfirst(nodeptr*,int);
int deletefromfirst(nodeptr*);
void displaylist(nodeptr);
int main()
{
	nodeptr list;
	list = NULL;
	insertatfirst(&list,5);
	insertatfirst(&list,6);
	insertatfirst(&list,7);
	insertatfirst(&list,8);
	insertatfirst(&list,9);
	insertatfirst(&list,10);
	displaylist(list);
	printf("deleted=%d\n",deletefromfront(&list));
    printf("deleted=%d\n",deletefromfront(&list));
	displaylist(list);
}
nodeptr getnode()
{
	return (nodeptr)malloc(sizeof(struct node));
}
void freenode (nodeptr p)
{
	free(p);
}
void insertatfirst(nodeptr *p, int x)
{
	nodeptr q;
	q = getnode();
	q->info = x;
	q->next = *p;
	*p =q;
}
void displaylist(nodeptr p)
{
	nodeptr ptr = p;
	while(ptr!= NULL)
	{
		printf("%d\n",ptr->info);
		ptr = ptr->next;
	}
}

int deletefromfront(nodeptr*p)
{
	if (*p == NULL) 
	
	{
 		printf ("\n Linked List Underflow \n");
 		getch();
		exit(1);
 	}
 	else
 	{
	 	nodeptr q;
    	int x;
    	q=*p;
    	*p=q->next;
    	x=q->info;
    	free(q);
    	return x;
	}
}







