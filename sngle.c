#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	int data;
	struct student *link;
}su;
su *head=NULL;
void add_beg()
{
	int i;
	su *new=NULL;
	su *temp;
	new=(su *)malloc(sizeof(su));
	printf("\nenter data \n");
	scanf("%d",&i);
	new->data=i;
	new->link=NULL;
	su *p;
	if(head==NULL)
	{
		head=new;
		head->link = new;
	//	temp=head;
	//	p=new;
	}
	else
	{

		new->link=head->link;
		head->link=new;
		head = new;
	//	temp->link=new;
	}
}
void disp()
{
	su *ptr;
	ptr=head->link;
do	{	
	printf("\t%d\t",ptr->data);
		ptr=ptr->link;

	}
	while(ptr!=head->link);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.add beg\n2.disp\n3.exit\n");
		printf("\nenter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_beg();
			       break;
			case 2:disp();
			       break;
			case 3:exit(0);
			       break;
			default :printf("\ninvalid option\n");
				 exit(0);

		}
	}
}
