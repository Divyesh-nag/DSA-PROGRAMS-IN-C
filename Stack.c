/*  1.

#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void peep();

void main()
{
    top=-1;
    printf("\n Enter the size of STACK:\t");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\nEnter the choice from the table:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peep();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                printf("\n\tPlease Enter a Valid Choice");
            }
                
        }
    }
    while(choice!=4);
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK overflow"); 
    }
    else
    {
        printf("Enter a value to be pushed:\t");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        printf("\n\t The popped element is \t%d",stack[top]);
        top--;
    }
}

void peep()
{
    if(top>=0)
    {
        printf("\n The elements in STACK\n");
        for(i=top;i>=0;i--)
            printf("%d\t",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}


*/




/*  2.


#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;


void push(int data);
void pop();
void peep();
void create();

void main()
{
    int no, choice;
 	printf("\n\t STACK OPERATIONS USING LINKED LISTS");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    create();
 
    do
    {
        printf("\nEnter choice : ");
        scanf("%d", &choice);
 
        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            exit(0);
        default :
            printf("\n\tPlease enter a valid choice  ");
            break;
        }
    }while(choice!=4);
}
 
void create()
{
    top=NULL;
}

void push(int data)
{
    if (top==NULL)
    {
        top=(struct node *)malloc(1*sizeof(struct node));
        top->ptr=NULL;
        top->info=data;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        temp->ptr=top;
        temp->info=data;
        top=temp;
    }
}
 
void pop()
{
    top1=top;
 
    if (top1==NULL)
    {
        printf("\nstack is empty");
        return;
    }
    else
        top1=top1->ptr;
    printf("\nPopped value : %d", top->info);
    free(top);
    top = top1;
}

void peep()
{
    top1=top;
 
    if (top1==NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1!=NULL)
    {
        printf("%d ",top1->info);
        top1=top1->ptr;
    }
 }

*/




/* 3.


#include<stdio.h>

int top=-1;
int stack[100];
void push(int);
int pop();
void insert_sort(int);
void peek();

void main()
{
    int s,no, choice;
    printf("\n Enter the size of STACK:\t");
    scanf("%d",&s);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t");
    printf("\n\t------------------------------------");
    do
    {
        printf("\nEnter choice : ");
        scanf("%d", &choice);
 
        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            insert_sort(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        default :
            printf("\n\tPlease enter a valid choice  ");
            break;
        }
    }while(choice!=4);
}

void push(int n)
{
	if(top>=s-1)
	{
		printf("\nStack Overflow!");
		return;
	}
	else
	{
		top++;
		stack[top]=n;	
	}
}
int pop()
{
	if(top<=-1)
	{
		printf("\nStack Underflow!");
		return;	
	}	
	else
	printf("the popped element is \t%d",stack[top]);
	top--;		
}

void insert_sort(int element)
{
	int x;
	if(top==-1 || stack[top]<element){
		push(element);
		return;
	}
	else{
		x=pop();
		insert_sort(element);
		push(x);
	}
}




*/






/* 4.

#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop();
int peek();
void display();

int top=-1;
int stack[10];

int main(){
	
	printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for display\nEnter 5 to exit\n");
	int choice,again=1;
	int n;
	while(again!=0){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("\nEnter a number to be pushed into the stack: ");
				scanf("%d", &n);
				push(n);
				break;
			case 2:
				printf("\n%d has been poped out from the stack",pop());
				break;
			case 3:
				printf("\n%d is at the top of the stack",peek());
				break;
			case 4:
				display();
				break;
			case 5:
				again=0;
				break;
			default:
				printf("\nInvalid Choice!");
				
		}
	}
}

void push(int n){
	int i=0;
	int lim=n;
	for(i=0;i<n;i++){
		if(top>9){
		printf("\nStack Overflow!");
		}
		else{
			top++;
			stack[top]=n;	
		}	
	}
	
}
int pop(){
	int i=0;
	int lim=peek();
	if(lim==0){
		return;
	}
	else{
		for(i=0;i<lim;i++){
			if(top==-1){
			printf("\nStack is empty!");
			exit(1);
			}
			else{
				top--;			
			}
		}
	}
	return stack[top+1];	
}
int peek(){
	if(top==-1){
		printf("\nStack is empty!");
		exit(1);
	}
	else{
		
		return stack[top];
	}
	
}
void display(){
	if(top==-1){
		printf("\nStack is empty!");
		return;	
	}
	else{
		int i;
		printf("\nThe elements in the stack are:");
		for(i=top;i>=0;i--){
			printf(" %d",stack[i]);
		}
	}
	
}

*/






/* 1.

#include<stdio.h>

int top=-1,s,choice;
int stack[100];
void push(int);
int pop();
void insert_sort(int);
void display();

void main()
{
    top=-1;
    printf("\n Enter the size of STACK:\t");
    scanf("%d",&s);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n\t");
    do
    {
        printf("\nEnter the choice from the table:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            	int val;
            printf("Enter a value to be pushed:\t");
        	scanf("%d",&val);
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
            	break;
            }
            default:
            {
                printf("\n\tPlease Enter a Valid Choice");
            }
                
        }
    }
    while(choice!=4);
}

void push(int n)
{
	if(top>=s-1)
	{
		printf("\nStack Overflow");
		return;
	}
	else
	{
		top++;
		stack[top]=n;	
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nStack Underflow");
		return;	
	}	
	else
		top--;
		return stack[top+1];		
}

void insert_sort(int element)
{
	int x;
	if(top==-1 || stack[top]<element)
	{
		push(element);
		return;
	}
	else
	{
		x=pop();
		insert_sort(element);
		push(x);
	}
}

void display()
{
	int x;
	if(top==-1)
	{
		return;
	}	
	else
	{
		x=pop();
		display();
		printf(" %d", x);
		push(x);
	}
}



*/




/* 3.


#include<stdio.h>
int top=-1,s,choice;
int stack[10];
void push(int);
int pop();
void push_bottom(int);
void reverse();
void display();

void main()
{
    top=-1;
    printf("\n Enter the size of STACK:\t");
    scanf("%d",&s);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.REVERSE DISPLAY\n\t 4.EXIT\n\t");
    do
    {
        printf("\nEnter the choice from the table:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            	int val;
            printf("Enter a value to be pushed:\t");
        	scanf("%d",&val);
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
            	reverse();
                display();
                reverse();
                break;
            }
            case 4:
            {
            	break;
            }
            default:
            {
                printf("\n\tPlease Enter a Valid Choice");
            }
                
        }
    }
    while(choice!=4);
}

void push(int n)
{
	if(top>=s-1)
	{
		printf("\nStack Overflow");
		return;
	}
	else{
		top++;
		stack[top]=n;	
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nStack Underflow");
		return;	
	}	
	else
		top--;
		return stack[top+1];		
}

void push_bottom(int element)
{
	int x;
	if(top==-1)
	{
		push(element);
		return;
	}
	else
	{
		x=pop();
		push_bottom(element);
		push(x);
	}
}

void reverse()
{
	int x;
	if(top==-1)
	{
		return;
	}
	else
	{
		x=pop();
		reverse();
		push_bottom(x);
	}
}

void display()
{
	int x;
	if(top==-1)
	{
		return;
	}	
	else
	{
		x=pop();
		display();
		printf(" %d", x);
		push(x);
	}
}


*/




/* 4.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
char pop();
int precedence(char);
void infix_to_postfix(char []);
int temp, length=0, index1=0, pos=0, top= -1;
char symbol, infix[30], postfix[30], stack[50];
main(){
   	      char infix[25];
   	      printf("Enter the infix expression:\n");
   	      gets(infix);
   	      infix_to_postfix(infix);
   	      printf("The equivalent postfix expression :\n");
   	      puts(postfix);
          }
void push(char symbol)
{
     		top=top+1;
     		stack[top]= symbol;    
}

char pop()
{
   		char temp;
   		temp=stack[top];
   		top=top-1;
   		return temp;   
}

int precedence(char symbol)
{
   		int priority;
   		switch(symbol)
   		{
   			case '#':
   					priority=0;
   					break;
   			case '(':
   			case ')':
   					priority=1;
   					break;
   			case '+':
   			case '-':
   					priority=2;
   					break;
   			case '*':
   			case '/':
   					priority=3;
   					break;
   			case '^':
   					priority=4;
   					break;
   	
   		}
   	           return (priority);
}


void infix_to_postfix(char infix[])
{
   		length= strlen(infix);
   		push('#');
   		while(index1<length)
   		{
      			symbol= infix[index1];
      			switch(symbol)
      			{
				case '(':
		     			push(symbol);
		     			break;

	 			case ')':
      					temp=pop();
		        			while(temp!='(')
		        			{
					postfix[pos]=temp;			 	
			 		pos++;
					 temp=pop();
		      			}
      					break;
			  	case '+':
		  		case '-':
		  		case '*':
		  		case '/':
		  		case '^':
		       		while(precedence(stack[top])>=precedence(symbol))
		       		{
			  		temp=pop();
			        		postfix[pos]=temp;
			        		pos++;
			   	}
				push(symbol);
				break;

	  	  		default:
		      			postfix[pos++]=symbol;
		      			break;
	  		}
		index1++;
    	}
	  while(top>0)
	  {
		temp=pop();
		postfix[pos++]=temp;
	  	postfix[pos]='\0';
	  }
}


*/





/* 

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#define MAX 20
void push(int);
char pop();
void infix_to_prefix();
int precedence (char);
char stack[20],infix[20],prefix[20];
int top = -1;

int main()
{
printf("\n enter the infix expression : ");
scanf("%s",infix);
infix_to_prefix();
return 0;
}

void push(int pos)
{
if(top == MAX-1)
{
printf("\nstack overflow\n");
}
else {
top++;
stack[top] = infix[pos];
}}

char pop()
{
char ch;
if(top < 0)
{
printf("\nstack underflow\n");
exit(0);
}
else
{
ch = stack[top];
stack[top] = '\0';
top--;
return(ch);
}
return 0;
}

void infix_to_prefix()
{
int i = 0,j = 0;
strrev(infix);
while(infix[i] != '\0')
{
if(infix[i] >= 'a' && infix[i] <= 'z')
{
prefix[j] = infix[i];
j++;
i++;
}
else if(infix[i] == ')')
{
push(i);
i++;
}
else if(infix[i] == '(') 
{
if(infix[i] == '(')
{
while(stack[top] != ')')
{
prefix[j] = pop();
j++;
}
pop();
i++;
}
}
else
{
if(top == -1)
{
push(i);
i++;
}
else if( precedence(infix[i]) < precedence(stack[top]))
{
prefix[j] = pop();
j++;
while(precedence(stack[top]) > precedence(infix[i])){
prefix[j] = pop();
j++;
if(top < 0) {
break;
}}
push(i);
i++;
}
else if(precedence(infix[i]) >= precedence(stack[top]))
{
push(i); 
i++;
}}}
while(top != -1)
{
prefix[j] = pop();
j++;
}
strrev(prefix);
prefix[j] = '\0';
printf("equivalent prefix expression is : %s ",prefix);
}

int precedence(char alpha)
{
if(alpha == '+' || alpha =='-')
{
return(1);
}
if(alpha == '*' || alpha =='/')
{
return(2);
}
return 0;
}



*/







#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
char pop();
int precedence(char);
void infix_to_postfix(char []);
int temp, length=0, index1=0, pos=0, top= -1;
int infix[30],stack[50];
main(){
   	      int infix[25];
   	      printf("Enter the infix expression:\n");
   	      for(int i=0;i!='\0',i++)infix);
   	      postfix_eva(infix);
   	      printf("The equivalent postfix result is %d : ",stack[top]\n);
          }

void push(int infix)
{
     		top=top+1;
     		stack[top]= infix;    
}

char pop()
{
   		char temp;
   		temp=stack[top];
   		top=top-1;
   		return temp;   
}


void postfix_eva(int infix[])
{
	int m=strlen(infix)
	for (i = 0; intfix[m]; i++) 
    { 
  		if (infix[i]=='\0')
		return;
        else
        { 
            int val1 = pop(stack); 
            int val2 = pop(stack); 
            switch (infix[i]) 
            { 
            case '+': push(stack, val2 + val1); break; 
            case '-': push(stack, val2 - val1); break; 
            case '*': push(stack, val2 * val1); break; 
            case '/': push(stack, val2/val1); break; 
            } 
        } 
    } 
}




/*

#include<stdio.h>
#include<stdlib.h>
struct node
{
int num;
struct node *next;
};

struct node *temp,*top=NULL,*temptop;

void push()
{
int n;
printf("enter the number \n");
scanf("%d",&n);
if(top==NULL)
{
top=(struct node*)malloc(sizeof(struct node));
top->next=NULL;
top->num=n;
}
else
{
temp=(struct node*)malloc(sizeof(struct node));
temp->next=top;
temp->num=n;
top=temp;
}
}




void pop()
{
temptop=top;
if(temptop==NULL)
{
printf("error\n");
return;
}
else
{
temptop=temptop->next;
printf("poped value = %d",temptop->num);
free(top);
top=temptop;
}
}




void main()
{
printf("\t\tstack\n\n");

int a,ch;
printf("for the first time enter options 1 only\n");
do
{
printf("\tselect any one from the MENU\n\n");
printf("1. push into stack\n2. pop from the stack\n\n");
printf("please enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
default:
printf("wrong choice\n");
}
printf("\nenter '1' to goto the MENU and '0' to exit:\t");
scanf("%d",&a);
}while(a);
}


*/