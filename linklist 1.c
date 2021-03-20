
//delete


/*


#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

struct node *start,*newnode,*ptr,*temp;


void create(int n,int item)
{
int val;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
start=newnode;

ptr=start;
for(int i=2;i<=n;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
ptr->next=newnode;
ptr=ptr->next;
}
}


void delete_first()
{
temp=start;
start=start->next;
free(temp);
}

void delete_last()
{
ptr=start;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
free(ptr);
}


void delete_pos()
{
int pos;
printf("enter the location after which the data is to be deleted\n");
scanf("%d",&pos);
ptr=start;
for(n=1;n<pos;n++)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=ptr->next;
free(ptr);
}


void display()
{
ptr=start;
printf("\nlist is :\n");
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
printf("\n");
}


void main()
{
int n,item;
printf("creating nodes\n\n");
printf("enter the number of nodes \n");
scanf("%d",&n);
printf("enter the value of the 1 node\n");
scanf("%d",&item);
create(n,item);

int ch;
printf("\n\tselect any one from the MENU\n\n");
printf("1. delete from the beginning\n2. delete from the end\n3. delete from any position\n\n");
printf("please enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
delete_first();
break;
case 2:
delete_last();
break;
case 3:
delete_pos();
break;
default:
printf("wrong choice\n");
}
display();
}


*/



// reverse



/*

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

struct node *start,*newnode,*ptr,*temp,*curr;


void create(int n,int item)
{
int val;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
start=newnode;

ptr=start;
for(int i=2;i<=n;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
ptr->next=newnode;
ptr=ptr->next;
}
}


void rev()
{
curr=start;
temp=curr->next;
curr->next=NULL;
while(temp->next!=NULL)
{
ptr=temp->next;
temp->next=curr;
curr=temp;
temp=ptr;
}
temp->next=curr;
start=temp;
}

void display()
{
ptr=start;
printf("\nlist is :\n");
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
printf("\n");
}

void main()
{
int n,item;
printf("creating nodes\n\n");
printf("enter the number of nodes \n");
scanf("%d",&n);
printf("enter the value of the 1 node\n");
scanf("%d",&item);
create(n,item);
printf("\nthe reversed linklist is\n");
rev();
display();
}


*/





// search


/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

struct node *start,*newnode,*ptr,*temp,*curr;


void create(int n,int item)
{
int val;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
start=newnode;

ptr=start;
for(int i=2;i<=n;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
ptr->next=newnode;
ptr=ptr->next;
}
}

void search(int num)
{
int c=0;
ptr=start;
while(ptr!=NULL)
{
if(ptr->data==num)
c=1;
ptr=ptr->next;
}
if(c==1)
printf("the number you searched is found \n");
if(c==0)
printf("the number you searched is not found\n");
}

void display()
{
ptr=start;
printf("\nlist is :\n");
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
printf("\n");
}

void main()
{
int n,item,num;
printf("creating nodes\n\n");
printf("enter the number of nodes \n");
scanf("%d",&n);
printf("enter the value of the 1 node\n");
scanf("%d",&item);
create(n,item);
display();
printf("\nenter the number you want to search\n");
scanf("%d",&num);
search(num);
}


*/






// double linklist


/*



#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
struct node *prev;
};

struct node *newnode,*start=NULL,*ptr,*curr,*temp;



struct node *create(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->num=x;
return newnode;
}



void at_first()
{
int val;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
newnode->next=start;
newnode->prev=NULL;
start=newnode;
}


void at_last()
{
int val;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
newnode->next=NULL;
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;
}



void at_pos()
{
int val,p;
printf("\nenter the position after which the number is to be added\t");
scanf("%d",&p);
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
curr=start;
for(int i=1;i<p;i++)
{
temp=curr;
curr=curr->next;
}
newnode->next=curr;
newnode->prev=temp;
temp->next=newnode;
curr->prev=newnode;
}


void display()
{
printf("\ndisplaying list\n");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
}


void main()
{
printf("\t\tdouble linklist\n\n");

int a=1,ch;
printf("for the first time enter options only for 1,2\n");
do
{
printf("\tselect any one from the MENU\n\n");
printf("1. insert at the beginning\n2. insert at the end\n3. insert at any position\n4. display the contents\n\n");
printf("please enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
at_first();
break;
case 2:
at_last();
break;
case 3:
at_pos();
break;
case 4:
display();
break;
default:
printf("wrong choice\n");
}
printf("\nenter '1' to goto the MENU and '0' to exit:\t");
scanf("%d",&a);
}while(a);
}


*/
