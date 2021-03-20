
/* 1.

#include<stdio.h>

void addition(int [100],int [100],int ,int );
void product(int [100], int[100],int ,int );
void main()
{
int a[100],b[100],sum[100],i,j,n,m;
printf("Enter the size of polynomial 1-  ");
scanf("%d",&m);
printf("Enter the size of polynomial 2-  ");
scanf("%d",&n);
  
for(i=0;i<m;i++)
{
printf("Enter the coefficients of x^%d element of polynomial 1-\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("Enter the coefficients of x^%d element of polynomial 2-\t",i);
scanf("%d",&b[i]);
}
addition(a,b,m,n);
product(a,b,m,n);
}

void addition(int a[100],int b[100],int m,int n)
{
printf("the addition of the polynomial is\n");
int i,j,sum[100];    
if(m<n)
{
for(i=m;i<n;i++)
a[i]=0;
}  
else
{
for(i=n;i<m;i++)
b[i]=0;
}
if(m<n)
{
for(i=0;i<n;i++)
    
sum[i]=a[i]+b[i];

for(i=0;i<n;i++)	
printf("%d (x^%d)  +  ",sum[i],i);

}
else
{
 for(i=0;i<m;i++)
sum[i]=a[i]+b[i];
for(i=0;i<m;i++)
printf("%d (x^%d)  +  ",sum[i],i);
}
}
void product(int a[100],int b[100],int m,int n)
{
printf("\nthe product of the polynomial is");
int i,j;
int pro[200];
printf("\n\n");
  
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
pro[i+j]=0;
}
}
    
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
pro[i+j]=pro[i+j]+a[i]*b[j];
}
}
for(i=0;i<m+n-1;i++)
{     
printf("%d (x^%d)  +  ",pro[i],i);
}
printf("\n");
}



*/





/* 2.

#include <stdio.h>
void main()
{
int A[3][3];
int row, col,a, b, c, d, e, f, g, h, i;
float det;

printf("Enter elements in matrix of size 3x3: \n");
for(row=0; row<3; row++)
{
for(col=0; col<3; col++)
{
scanf("%d", &A[row][col]);
}
printf("\n");
}

a = A[0][0];
b = A[0][1];
c = A[0][2];
d = A[1][0];
e = A[1][1];
f = A[1][2];
g = A[2][0];
h = A[2][1];
i = A[2][2];

det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));

printf("Determinant of matrix A = %f", det);

}

*/




/*3.


#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
};

struct node *newnode1,*newnode2,*start1=NULL,*start2=NULL,*ptr,*temp;


void create1(int n1,int item1)
{
int val;
newnode1=(struct node *)malloc(sizeof(struct node));
newnode1->num=item1;
newnode1->next=NULL;
start1=newnode1;

ptr=start1;
for(int i=2;i<=n1;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode1=(struct node *)malloc(sizeof(struct node));
newnode1->num=val;
newnode1->next=NULL;
ptr->next=newnode1;
ptr=ptr->next;
}
}


void create2(int n2,int item2)
{
int val;
newnode2=(struct node *)malloc(sizeof(struct node));
newnode2->num=item2;
newnode2->next=NULL;
start2=newnode2;

ptr=start2;
for(int i=2;i<=n2;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode2=(struct node *)malloc(sizeof(struct node));
newnode2->num=val;
newnode2->next=NULL;
ptr->next=newnode2;
ptr=ptr->next;
}
}


void swap()
{
temp=start1;
start1=start2;
start2=temp;
}


void display()
{
printf("\ndisplaying elements for list 1\n");
for(ptr=start1;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
printf("\ndisplaying elements for list 2\n");
for(ptr=start2;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
printf("\n");
}



void main()
{
int n1,n2,item1,item2;
printf("creating nodes\n\n");
printf("enter the number of nodes for linklist 1\n");
scanf("%d",&n1);
printf("enter the value of the 1 node\n");
scanf("%d",&item1);
create1(n1,item1);
printf("\ncreating nodes\n\n");
printf("enter the number of nodes for linklist 1\n");
scanf("%d",&n2);
printf("enter the value of the 1 node\n");
scanf("%d",&item2);
create2(n2,item2);

printf("\nafter swapping \n");
swap();
display();
}


*/




/*4.


#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
struct node *prev;
};
struct node *newnode1,*newnode2,*start1=NULL,*start2=NULL,*ptr,*ptr1,*curr,*temp;


struct node *create1(int x)
{
newnode1=(struct node*)malloc(sizeof(struct node));
newnode1->num=x;
return newnode1;
}

struct node *create2(int x)
{
newnode2=(struct node*)malloc(sizeof(struct node));
newnode2->num=x;
return newnode2;
}


void link1()
{
int val;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode1=create1(val);
newnode1->next=start1;
newnode1->prev=NULL;
start1=newnode1;
}

void rev1()
{
curr=start1;
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
start1=temp;
}

void link2()
{
int val;
printf("creating new node\n");
printf("\nenter the value\t");
scanf("%d",&val);
newnode2=create2(val);
newnode2->next=start2;
newnode2->prev=NULL;
start2=newnode2;
}

void rev2()
{
curr=start2;
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
start2=temp;
}


void merge()
{
rev1();
rev2();
ptr=start1;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=start2;
}

void display1()
{
printf("\ndisplaying list\n");
for(ptr=start1;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
}

void display2()
{
printf("\ndisplaying list\n");
for(ptr=start2;ptr!=NULL;ptr=ptr->next)
{
printf("\t%d\t",ptr->num);
}
printf("\n");
}


void main()
{
printf("\t\tdouble linklist\n\n");
int a=1;
printf("for linklist 1\n");
do
{
link1();
printf("enter '1' to enter more and '0' to not\n");
scanf("%d",&a);
}while(a);
printf("for linklist 2\n");
do
{
link2();
printf("enter '1' to enter more and '0' to not\n");
scanf("%d",&a);
}while(a);
printf("\n the 1st linklist is\n");
rev1();
display1();
printf("\n the 2nd linklist is\n");
rev2();
display2();
printf("\nafter merging the two\n");
merge();
display1();
}



*/





/* 5.


#include<stdio.h> 
#include<stdlib.h> 
  

struct Node 
{ 
int value; 
int row_position; 
int column_postion; 
struct Node *next; 
}; 

void createnode(struct Node** start, int non_zero_element, int row_index, int column_index ) 
{ 
struct Node *temp, *r; 
temp = *start; 
if (temp == NULL) 
{
temp = (struct Node *) malloc (sizeof(struct Node)); 
temp->value = non_zero_element; 
temp->row_position = row_index; 
temp->column_postion = column_index; 
temp->next = NULL; 
*start = temp;   
} 
else
{ 
while (temp->next != NULL) 
temp = temp->next; 
r = (struct Node *) malloc (sizeof(struct Node)); 
r->value = non_zero_element; 
r->row_position = row_index; 
r->column_postion = column_index; 
r->next = NULL; 
temp->next = r; 
} 
} 


void PrintList(struct Node* start) 
{ 
struct Node *temp1, *temp2, *temp3; 
temp = r = s = start; 
  
printf("row_position: "); 
while(temp1!= NULL) 
{ 
printf("%d\t", temp->row_position); 
temp = temp->next; 
} 
printf("\n"); 
  
printf("column_postion: "); 
while(temp2!= NULL) 
{ 
printf("%d\t", temp2->column_postion); 
temp2= temp2->next; 
} 
printf("\n"); 
printf("Value: "); 
while(temp3!= NULL) 
{ 
printf("%d\t", temp3->value); 
temp3= temp3->next; 
} 
printf("\n"); 
} 
  
   
void main() 
{
int m,n,i,j;
printf("enter the total number of rows and columns of the sparse matrix\n");
scanf("%d%d",&m,&n);
int sparseMatric[m][n];
printf("enter the elements of the matrix row wise\n");
for (i = 0; i <m; i++)
{
for (j = 0; j <n; j++)
{ 
scanf("%d",&sparseMatric[i][j]);
}
printf("\n enter for new row\n");
}
struct Node* start = NULL; 
  
for (i = 0; i <m; i++) 
for (j = 0; j <n; j++) 
  
if (sparseMatric[i][j] != 0) 
createnode(&start, sparseMatric[i][j], i, j); 
  
PrintList(start);  
} 



*/






#include<stdio.h>
#include<stdlib.h>

struct node
{
float coef;
int expo;
struct node *link;
};

struct node *create(struct node *);
struct node *insert_s(struct node *,float,int);
struct node *insert(struct node *,float,int);
void display(struct node *ptr);
void poly_add(struct node *,struct node *);
void poly_sub(struct node *,struct node *);
void poly_mult(struct node *,struct node *);

void main( )
{
 struct node *start1=NULL,*start2=NULL;
 printf("Enter polynomial 1 :\n");
 start1=create(start1);
 printf("Enter polynomial 2 :\n");
 start2=create(start2);
 printf("Polynomial 1 is : ");
 display(start1);
 printf("Polynomial 2 is : ");
 display(start2);
 poly_add(start1, start2);
 poly_sub(start1, start2);
 poly_mult(start1, start2);
}

struct node *create(struct node *start)
{
 int i,n,ex;
 float co;
 printf("Enter the number of terms : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("Enter coeficient for term %d : ",i);
 scanf("%f",&co);
 printf("Enter exponent for term %d : ",i);
 scanf("%d",&ex);
 start=insert_s(start,co,ex);
}
return start;
}

struct node *insert_s(struct node *start,float co,int ex)
{
 struct node *ptr,*temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->coef=co;
 temp->expo=ex;
 if(start==NULL || ex > start->expo)
 {
 temp->link=start;
 start=temp;
 }
 else
 {
 ptr=start;
 while(ptr->link!=NULL && ptr->link->expo >= ex)
 ptr=ptr->link;
 temp->link=ptr->link;
 ptr->link=temp;
}
 return start;
}

struct node *insert(struct node *start,float co,int ex)
{
 struct node *ptr,*temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->coef=co;
 temp->expo=ex;
 if(start==NULL)
 {
 temp->link=start;
 start=temp;
 }
 else 
 {
 ptr=start;
 while(ptr->link!=NULL)
 ptr=ptr->link;
 temp->link=ptr->link;
 ptr->link=temp;
 }
 return start;
}

void display(struct node *ptr)
{
 if(ptr==NULL)
 {
 printf("Zero polynomial\n");
 return;
 }
 while(ptr!=NULL)
 {
 printf("(%.1fx^%d)", ptr->coef,ptr->expo);
 ptr=ptr->link;
 if(ptr!=NULL)
 printf(" + ");
 else
 printf("\n");
 }
}

void poly_add(struct node *p1,struct node *p2)
{
 struct node *start3;
 start3=NULL;
 while(p1!=NULL && p2!=NULL)
 {
 if(p1->expo > p2->expo)
 {
 start3=insert(start3,p1->coef,p1->expo);
 p1=p1->link;
 }
 else if(p2->expo > p1->expo)
 {
 start3=insert(start3,p2->coef,p2->expo);
 p2=p2->link;
 }
 else if(p1->expo==p2->expo)
 {
 start3=insert(start3,p1->coef+p2->coef,p1->expo);
 p1=p1->link;
 p2=p2->link;
 }
 }
 
 while(p1!=NULL)
 {
 start3=insert(start3,p1->coef,p1->expo);
 p1=p1->link;
 }

 while(p2!=NULL)
 {
 start3=insert(start3,p2->coef,p2->expo);
 p2=p2->link;
 }
 printf("Added polynomial is : ");
 display(start3);
}

void poly_sub(struct node *p1,struct node *p2)
{
 struct node *start3;
 start3=NULL;
 while(p1!=NULL && p2!=NULL)
 {
 if(p1->expo > p2->expo)
 {
 start3=insert(start3,p1->coef,p1->expo);
 p1=p1->link;
 }
 else if(p2->expo > p1->expo)
 {
 start3=insert(start3,p2->coef,p2->expo);
 p2=p2->link;
 }
 else if(p1->expo==p2->expo)
 {
 start3=insert(start3,p1->coef-p2->coef,p1->expo);
 p1=p1->link;
 p2=p2->link;
 }
 }

 while(p1!=NULL)
 {
 start3=insert(start3,p1->coef,p1->expo);
 p1=p1->link;
 }
 
 while(p2!=NULL)
 {
 start3=insert(start3,p2->coef,p2->expo);
 p2=p2->link;
 }
 printf("Subtracted polynomial is : ");
 display(start3);
}

void poly_mult(struct node *p1, struct node *p2)
{
 struct node *start3;
 struct node *p2_beg = p2;
 start3=NULL;
 if(p1==NULL || p2==NULL)
 {
 printf("Multiplied polynomial is zero polynomial\n");
 return;
 }
 while(p1!=NULL)
 {
 p2=p2_beg;
 while(p2!=NULL)
 {
 start3=insert_s(start3,p1->coef*p2->coef,p1->expo+p2->expo);
 p2=p2->link;
 }
 p1=p1->link;
 }
 printf("Multiplied polynomial is : ");
 display(start3);
}









/*

void create1(int n1,int item1)
{
int val;
newnode1=(struct node *)malloc(sizeof(struct node));
newnode1->num=item1;
newnode1->prev=NULL;
start1=newnode1;

ptr=start1;
for(int i=2;i<=n1;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode1=(struct node *)malloc(sizeof(struct node));
newnode1->num=val;
newnode1->prev=ptr;
ptr->next=newnode1;
newnode1->next=NULL;
}
printf("\ndisplaying elements for the merged list\n");
ptr=start1;
while(ptr->next!=NULL)
{
printf("\t%d\t",ptr->num);
ptr=ptr->next;
}
printf("\n");
}


void create2(int n2,int item2)
{
int val;
newnode2=(struct node *)malloc(sizeof(struct node));
newnode2->num=item2;
newnode2->prev=NULL;
start2=newnode2;

ptr1=start2;
for(int i=2;i<=n2;i++)
{
printf("enter the value of the %d node\n",i);
scanf("%d",&val);
newnode2=(struct node *)malloc(sizeof(struct node));
newnode2->num=val;
newnode2->prev=ptr1;
ptr1->next=newnode2;
newnode2->next=NULL;
}

printf("\ndisplaying elements for the merged list\n");
ptr=start2;
while(ptr->next!=NULL)
{
printf("\t%d\t",ptr->num);
ptr=ptr->next;
}
printf("\n");
}


void merge()
{

temp=start1;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=start2;
}


void display()
{
printf("\ndisplaying elements for the merged list\n");
ptr=start1;
while(ptr->next!=NULL)
{
printf("\t%d\t",ptr->num);
ptr=ptr->next;
}
printf("\n");
}



void main()
{
int n1,n2,item1,item2;
printf("creating nodes\n\n");
printf("enter the number of nodes for linklist 1\n");
scanf("%d",&n1);
printf("enter the value of the 1 node\n");
scanf("%d",&item1);
create1(n1,item1);
printf("\ncreating nodes\n\n");
printf("enter the number of nodes for linklist 2\n");
scanf("%d",&n2);
printf("enter the value of the 1 node\n");
scanf("%d",&item2);
create2(n2,item2);

printf("\nafter merging \n");
merge();
display();
}




*/




