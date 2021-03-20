
//date - 20/8/20

/* 1.

#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
};

struct node *newnode,*start=NULL,*ptr,*prev,*temp;



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
prev=start;
for(int i=1;i<p;i++)
{
prev=prev->next;
}
newnode->next=prev->next;
prev->next=newnode;
}


void display()
{
printf("\ndisplaying elements\n");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
}


void main()
{
printf("\t\tsingle linklist\n\n");

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



// Date - 26/8/2020



/* 1.



#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
};

struct node *newnode,*start=NULL,*ptr,*prev,*curr,*temp;



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
prev=start;
for(int i=1;i<p;i++)
{
prev=prev->next;
}
newnode->next=prev->next;
prev->next=newnode;
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
for(int n=1;n<pos;n++)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=ptr->next;
free(ptr);
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
printf("\ndisplaying elements\n");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
}


void main()
{
printf("\t\tsingle linklist\n\n");

int a=1,ch;
printf("for the first time enter options only for 1,2\n");
do
{
printf("\tselect any one from the MENU\n\n");
printf("1. insert at the beginning\n2. insert at the end\n3. insert at any position\n4. delete from the first\n5. delete from the last\n6. delete from any position\n7. reverse printing of the list\n8. display the contents\n\n");
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
delete_first();
break;
case 5:
delete_last();
break;
case 6:
delete_pos();
break;
case 7:
rev();
printf("\nafter reverse");
display();
rev();
break;
case 8:
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






/* 2.


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
printf("\nenter the position at which the number is to be added\t");
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


void delete_first()
{
temp=start;
start=start->next;
start->prev=NULL;
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
printf("enter the location at which the data is to be deleted\n");
scanf("%d",&pos);
ptr=start;
for(int n=1;n<pos;n++)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=ptr->next;
ptr->next->prev=temp;
free(ptr);
}


void display()
{
printf("\ndisplaying elements\n");
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
printf("1. insert at the beginning\n2. insert at the end\n3. insert at any position\n4. delete from the first\n5. delete from the last\n6. delete from any position\n7. display the contents\n\n");
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
delete_first();
break;
case 5:
delete_last();
break;
case 6:
delete_pos();
break;
case 7:
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




//* 3.


#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
};

struct node *newnode,*start=NULL,*ptr,*prev,*curr,*temp,*beg;



struct node *create(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->num=x;
return newnode;
}


void in_first()
{
int val;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
newnode->next=start;
start=newnode;
}


void in_last()
{
int val;
ptr=start;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
newnode->next=start;
while(ptr->next!=start)
ptr=ptr->next;
ptr->next=newnode;
}


void in_pos()
{
int val,p;
printf("\nenter the position at which the number is to be added\t");
scanf("%d",&p);
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode=create(val);
curr=start;
for(int i=1;i<p;i++)
{
prev=curr;
curr=curr->next;
}
newnode->next=curr;
prev->next=newnode;
}


void delete_first()
{
temp=start;
beg=temp->next;
while(beg->next!=temp)
{
beg=beg->next;
}
beg->next=start;
free(temp);
}


void delete_last()
{
ptr=start;
while(ptr->next!=start)
{
prev=ptr;
ptr=ptr->next;
}
prev->next=start;
free(ptr);
}


void delete_pos()
{
int pos;
printf("enter the location at which the data is to be deleted\n");
scanf("%d",&pos);
ptr=start;
ptr=ptr->next;
for(int n=1;n<pos;n++)
{
temp=ptr;
ptr=ptr->next;
}
prev->next=ptr->next;
free(ptr);
}


void display()
{
printf("\ndisplaying elements\n");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
}


void main()
{
printf("\t\tcircular single linklist\n\n");

int a=1,ch;
printf("for the first time enter options only for 1,2\n");
do
{
printf("\tselect any one from the MENU\n\n");
printf("1. insert at the beginning\n2. insert at the end\n3. insert at any position\n4. delete from the first\n5. delete from the last\n6. delete from any position\n7. display the contents\n\n");
printf("please enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
in_first();
break;
case 2:
in_last();
break;
case 3:
in_pos();
break;
case 4:
delete_first();
break;
case 5:
delete_last();
break;
case 6:
delete_pos();
break;
case 7:
display();
break;
default:
printf("wrong choice\n");
}
printf("\nenter '1' to goto the MENU and '0' to exit:\t");
scanf("%d",&a);
}while(a);
}


/*/





// date - 10/9/2020



/* 1.


#include <stdio.h>
#include <stdlib.h>

struct stud
{
    int roll,course;
    char name[20];
    struct stud *next;
};

struct stud *start=NULL,*node,*ptr;

void csce(int c)
{
    node=(struct stud*)malloc(sizeof(struct stud));
    printf("Enter datas of student\nRoll : ");
    scanf("%d",&node->roll);
    printf("Name : ");
    scanf("%s",node->name);
    node->course=c;
    if(start==NULL)
    {
        node->next=NULL;
        start=node;
    }
    else
    {
        node->next=start;
        start=node;
    }
}

void csse(int c)
{
    ptr=start;
    node=(struct stud*)malloc(sizeof(struct stud));
    printf("Enter student info\n");
    printf("Roll : ");
    scanf("%d",&node->roll);
    printf("Name : ");
    scanf("%s",node->name);
    node->course=c;
    node->next=NULL;
    if(start == NULL)
        start=node;
    else if(start->next == NULL)
        start->next=node;
    else
    {
        while(ptr->next != NULL)
            ptr=ptr->next;
        ptr->next=node;
    }

}

void create()
{
    int a,c;
    do
    {
    printf("select the branch (CSCE->1 & CSSE->2): ");
    scanf("%d",&a);
    if(a == 1)
        csce(a);
    else if(a == 2)
        csse(a);
    printf("\npress '1' to continue '0' to exit ");
    scanf("%d",&c);
    }while(c != 0);
}

void display()
{
    ptr =start;
    printf("Name\tRoll\tBranch\n");
    while(ptr != NULL)
    {
        printf("%s\t%d\t",ptr->name,ptr->roll);
        if(ptr->course == 1)
            printf("csce\n");
        else
            printf("csse\n");
        ptr = ptr->next;
    }
}

void main()
{
    printf("\t Enter data to linked list student database :\n");
    create();
    printf("\n the content is :\n");
    display();
}



*/









/* 2.


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

void add()
{
    int l,k;
    printf("Enter the value of L :");
    scanf("%d\t",&l);
    printf("Enter the value of K :");
    scanf("%d\t",&k);
    ptr=start;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        if((temp->data%2)==0)
        {
            temp->data=temp->data-l;
        }
        else
        {
            temp->data=temp->data+k;
        }
        ptr=ptr->next;
    }
    if((ptr->data%2)==0)
    {
        ptr->data=ptr->data-l;
    }
    else
    {
		ptr->data=ptr->data+k;
	}
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
float p;
printf("creating nodes\n\n");
printf("enter the number of nodes \n");
scanf("%d",&n);
printf("enter the value of the 1 node\n");
scanf("%d",&item);
create(n,item);
display();
add();
printf("after additon operation \n");
display();
}


*/







/* 3.

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

int count(struct node *head)
{
int c=0;
while(head->next!=NULL)
{
ptr=head->next;
while(ptr!=NULL)
{
if(head->data==ptr->data)
{
c++;
break;
}
ptr=ptr->next;
}
head=head->next;
}
return c;
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

int n,c,item,num;
float p;
printf("creating nodes\n\n");
printf("enter the number of nodes \n");
scanf("%d",&n);
printf("enter the value of the 1 node\n");
scanf("%d",&item);
create(n,item);
display();
c=count(start);
printf("the count of duplicate elements is %d\n",c);

}

*/






/* 4.

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

struct node *start,*newnode,*ptr,*temp,*prev;


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

void insearch(int num)
{
    temp =start;
    prev=start;
    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            if(temp == start)
                return;
            prev->next=temp->next;
            temp->next=start;
            start = temp;
            return;
        }
        prev=temp;
        temp=temp->next;
    }
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
printf("\nenter the number you want to search and add to begining\n");
scanf("%d",&num);
insearch(num);
display();
}


*/







