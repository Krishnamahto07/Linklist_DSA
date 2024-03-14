#include <stdio.h>
#include <stdlib.h>
void insert_at_begning();
void insert_at_position();
void insert_at_end();
void display();
void insert();
void display();
void delete();

struct node
{
	int data;
	struct node *next;
};
struct node *temp = NULL;

int main()
{
	int choice;
	while (1)
	{
		printf("1. INSERT \n2. DELETE \n3. DISPLAY \n4. EXIT\nEnter Your Choice : ");
		//	printf("Enter Your Choice : ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			insert();
			break;
		case 2:
			delete ();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("INVALID\n");
			break;
		}
	}
}
void insert()
{
	int choice;
	printf("1. INSERT AT BEGNING \n2. INSERT AT SPECIFIED POSITION \n3. INSERT AT END\n");
	printf("Enter your Choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		insert_at_begning();
		break;
	case 2:
		insert_at_position();
		break;
	case 3:
		insert_at_end();
		break;
	default:
		printf("INVALID\n");
		break;
	}
}
void insert_at_begning()
{
	struct node *box;
	box = (struct node *)malloc(sizeof(struct node));
	printf("Enter Data : ");
	scanf("%d", &box->data);
	box->next = NULL;
	if (temp == NULL)
	{
		temp = box;
	}
	else
	{
		box->next = temp;
		temp = box;
	}
}
// void insert_at_position()
// {
// 	int pos, i = 1;
// 	struct node *box ;
// 	box = (struct node*)malloc(sizeof(struct node));
// 	printf("Enter Position : ");
// 	scanf("%d", &pos);
// 	if(pos == 1 )
// 	printf("INVALID POSITION\n");
// 	printf("Enter Data : ");
// 	scanf("%d", &box->data);
// 	box->next = NULL;
// 	struct node *t, *p;
// 	t = (struct node *)malloc(sizeof(struct node));
// 	p = (struct node *)malloc(sizeof(struct node));
// 	if (temp == NULL)
// 	{
// 		printf("LIST IS EMPTY\n");
// 	}
// 	else
// 	{
// 		t = temp;
// 		while (pos != i)
// 		{
// 			p = t;
// 			t = t->next;
// 			i++;
// 		}
// 		p -> next = box;
// 		box->next = t;
// 	}
// }

void insert_at_position()
{
	struct node*box;
	struct node*x;
	x = (struct node*)malloc(sizeof(struct node));
	x = temp;
	int pos,i=1;
	printf("Enter position : ");
	scanf("%d",&pos);

	
	
	box = (struct node*)malloc(sizeof(struct node));

}
void insert_at_end()
{
	struct node *box;
	box = (struct node *)malloc(sizeof(struct node));
	printf("Enter Data : ");
	scanf("%d", &box->data);
	box->next = NULL;
	if (temp == NULL)
	{
		temp = box;
	}
	else
	{
		struct node *t = temp;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = box;
	}
}
void display()
{
	struct node *d;
	int i = 0;
	if (temp == NULL)
		printf("LIST IS EMPTY\n");
	else
	{
		d = temp;
		while (d->next != NULL)
		{
			printf(" [ %d ] ->", d->data);
			d = d->next;
			i++;
		}
		printf(" [ %d ] ->\n", d->data);
		i++;
		printf("TOTAL DATA ARE = %d\n", i);
	}
}
void delete()
{
	exit(0);
}
