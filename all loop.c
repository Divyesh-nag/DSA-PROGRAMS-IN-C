/* 1.
#include<stdio.h>
void main()
{
int i=1,opt;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
switch(opt)
{
case 1:
for (i=1;i<=5;i++)
{
printf("name is divyesh nag\n");
}
break;
case 2:
while(i<=5)
{
printf("name is divyesh nag\n");
i++;
}
break;
case 3:
do
{
printf("name is divyesh nag\n");
i++;
}while(i<=4);
break;
default:
printf("wrong choice");
}
}*/










/*2.
#include<stdio.h>
void main()
{
int i=1,opt;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
switch(opt)
{
case 1:
for (i=1;i<=100;i++)
{
printf("%d \n",i);
}
break;
case 2:
while(i<=100)
{
printf("%d \n",i);
i++;
}
break;
case 3:
do
{
printf("%d \n",i);
i++;
}while(i<=100);
break;
default:
printf("wrong choice");
}
}*/










/*3.
/*#include<stdio.h>
void main()
{
int i=0,opt;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
switch(opt)
{
case 1:
for (i=100;i>=0;i--)
{
printf("%d \n",i);
}
break;
case 2:
while(i>=100)
{
printf("%d \n",i);
i--;
}
break;
case 3:
do
{
printf("%d \n",i);
i--;
}while(i>=100);
break;
default:
printf("wrong choice");
}
}*/










/*4.
#include<stdio.h>
void main()
{
int i,opt,m,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the starting and ending range \n" );
scanf("%d%d",&m,&n);
i=m;
switch(opt)
{
case 1:
for (i=m;i<=n;i++)
{
if(i%2!=0)
printf("%d \n",i);
}
break;
case 2:
while(i<=n)
{
if(i%2!=0)
printf("%d \n",i);
i++;
}
break;
case 3:
do
{
if(i%2!=0)
printf("%d \n",i);
i++;
}while(i<=n);
break;
default:
printf("wrong choice");
}
}*/











/*5.
#include<stdio.h>
void main()
{
int i,opt,m,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the starting and ending range \n" );
scanf("%d%d",&m,&n);
i=m;
switch(opt)
{
case 1:
for (i=m;i<=n;i++)
{
if(i%2==0)
printf("%d \n",i);
}
break;
case 2:
while(i<=n)
{
if(i%2==0)
printf("%d \n",i);
i++;
}
break;
case 3:
do
{
if(i%2==0)
printf("%d \n",i);
i++;
}while(i<=n);
break;
default:
printf("wrong choice");
}
}*/











/*6.
#include<stdio.h>
void main()
{
int i,opt,s=0,m,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the starting and ending range \n" );
scanf("%d%d",&m,&n);
i=m;
switch(opt)
{
case 1:
for (i=m;i<=n;i++)
{
s+=i;
}
printf("sum of the series upto end term is %d \n",s);
break;
case 2:
while(i<=n)
{
s+=i;
i++;
}
printf("sum of the series upto end terms is %d \n",s);
break;s
case 3:
do
{
s+=i;
i++;
}while(i<=n);
printf("sum of the series upto end terms is %d \n",s);
break;
default:
printf("wrong choice");
}
}*/











/*7.
#include<stdio.h>
void main()
{
int i,opt,s=0,m,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the starting and ending range \n" );
scanf("%d%d",&m,&n);
i=m;
switch(opt)
{
case 1:
for (i=m;i<=n;i++)
{
s+=i*i;
}
printf("sum of the series upto end term is %d \n",s);
break;
case 2:
while(i<=n)
{
s+=i*i;
i++;
}
printf("sum of the series upto end terms is %d \n",s);
break;
case 3:
do
{
s+=i*i;
i++;
}while(i<=n);
printf("sum of the series upto end terms is %d \n",s);
break;
default:
printf("wrong choice");
}
}*/










/*8.
#include<stdio.h>
void main()
{
int i=1,opt;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
switch(opt)
{
case 1:
for (i=1;i<=20;i++)
{
printf("%d \n",i);
}
break;
case 2:
while(i<=20)
{
printf("%d \n",i);
i++;
}
break;
case 3:
do
{
printf("%d \n",i);
i++;
}while(i<=20);
break;
default:
printf("wrong choice");
}
}*/











/*9.
#include<stdio.h>
void main()
{
int i,opt,s,m,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the starting and ending range \n" );
scanf("%d%d",&m,&n);
i=m;
switch(opt)
{
case 1:
for (i=m;i<=n;i++)
{
printf("%d \n",i);
}
break;
case 2:
while(i<=n)
{
printf("%d \n",i);
i++;
}
break;
case 3:
do
{
printf("%d \n",i);
i++;
}while(i<=n);
break;
default:
printf("wrong choice");
}
}*/










/*10.
#include<stdio.h>
void main()
{
int i,opt,fac=1,m;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number you want factorial of \n" );
scanf("%d",&m);
switch(opt)
{
case 1:
for (i=1;i<=m;i++)
{
fac*=i;
}
printf("the factorial of the number is %d \n",fac);
break;
case 2:
while(i<=m)
{
fac*=i;
i++;
}
printf("the factorial of the number is %d \n",fac);
break;
case 3:
do
{
fac*=1;
i++;
}while(i<=m);
printf("the factorial of the number is %d \n",fac);
break;
default:
printf("wrong choice");
}
}*/









/*11.
#include<stdio.h>
void main()
{
int i=1,opt,s=0,num,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number \n" );
scanf("%d",&num);
printf("enter the total number of digit present in the number \n");
scanf("%d",&n);
switch(opt)
{
case 1:
for (i=1;i<=n;i++)
{
int dig=0;
dig=num%10;
s+=i;
num=num/10;
}
printf("sum of the digits is/are %d \n",s);
break;
case 2:
while(i<=n)
{
int dig=0;
dig=num%10;
s+=i;
num=num/10;
i++;
}
printf("sum of the digit is/are %d \n",s);
break;
case 3:
do
{
int dig=0;
dig=num%10;
s+=i;
num=num/10;
i++;
}while(i<=n);
printf("sum of the series upto end terms is %d \n",i);
break;
default:
printf("wrong choice");
}
}*/










/*12.
#include<stdio.h>
void main()
{
int i=1,opt,gcd,num1,num2;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the first number and second number \n" );
scanf("%d%d",&num1,&num2);
switch(opt)
{
case 1:
for (i=1;i<=num1 && i<=num2;i++)
{
if (num1%i==0 &&num2%i==0)
gcd=i;
}
printf("GCD of %d and %d is %d \n",num1,num2,gcd);
break;
case 2:
while(i<=num1 && i<=num2)
{
if(num1%i==0 && num2%i==0)
gcd=i;
i++;
}
printf("GCD of %d and %d is %d \n",num1,num2,gcd);
break;
case 3:
do
{
if(num1%i==0 && num2%i==0)
gcd=i;
i++;
}while(i<=num1 && i<=num2);
printf("GCD of %d and %d is %d \n",num1,num2,gcd);
break;
default:
printf("wrong choice");
}
}*/










/*13.
#include<stdio.h>
void main()
{
int i=2,opt,num,c=0;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter any number \n" );
scanf("%d",&num);
switch(opt)
{
case 1:
for (i=2;i<=num/2;i++)
{
if (num%i==0)
c=1;
break;
}
if (c==0)
printf("the number is a prime number");
else
printf("the number is not a prime number");
break;
case 2:
while(i<=num/2)
{
if(num%i==0)
{
c=1;
break;
}
i++;
}
if(c==0)
printf("the number is a prime number");
else 
printf("the number is not a prime numberr");
break;
case 3:
do
{
if(num%i==0)
{
c=1;
break;
}
i++;
}while(i<=num/2);
if(c==0)
printf("the number is a prime number");
else
printf("the number is not a prime number");
break;
default:
printf("wrong choice");
}
}*/










/*14.
#include<stdio.h>
void main()
{
int i=1,opt,sum=0,num;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number to check if its perfect or not\n" );
scanf("%d",&num);
switch(opt)
{
case 1:
for (i=1;i<=num;i++)
{
if (num%i==0)
sum+=i;
}
if (sum==num)
printf("perfect number \n");
else
printf("not a perfect \n");
break;
case 2:
while(i<=num)
{
if(num%i==0)
sum+=i;
i++;
}
if(sum==num)
printf("perfect number \n");
else
printf("not a perfect number \n");
break;
case 3:
do
{
if(num%i==0)
sum+=i;
i++;
}while(i<=num);
if (sum==num)
printf("perfect number \n");
else
printf("not a perfect number \n");
break;
default:
printf("wrong choice");
}
}*/










/*15.
#include<stdio.h>
void main()
{
int i=1,opt,first=0,second=1,next,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number of terms \n" );
scanf("%d",&n);
switch(opt)
{
case 1:
printf("%d \t",second);
for (int i=1;i<=n;i++)
{
next=first+second;
first=second;
second=next;
printf("%d \t ",next);
}
break;
case 2:
printf("%d \t",second);
while(i<=n)
{
next=first+second;
first=second;
second=next;
printf("%d \t",next);
i++;
}
break;
case 3:
printf("%d \t",second);
do
{
next=first+second;
first=second;
second=next;
printf("%d \t",next);
i++;
}while(i<=n);
break;
default:
printf("wrong choice");
}
}*/











/*16.
#include<stdio.h>
void main()
{
int i=1,opt,x,n,pow=1;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the values of x and n where n is non negative integer \n" );
scanf("%d%d",&x,&n);
switch(opt)
{
case 1:
for (int i=1;i<=n;i++)
{
pow=pow*n;
i++;
}
printf("result is %d",pow);
break;
case 2:
while(i<=n)
{
pow=pow*n;
i++;
}
printf("result is %d",pow);
break;
case 3:
do
{
pow=pow*n;
i++;
}while(i<=n);
printf("result is %d",pow);
break;
default:
printf("wrong choice");
}
}*/











/*17.
#include<stdio.h>
void main()
{
int i=1,j=1,opt,sum=0,n;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number of terms \n" );
scanf("%d",&n);
switch(opt)
{
case 1:
for (int i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
sum=sum+j;
}
}
printf("sum of series is %d",sum);
break;
case 2:
while(i<=n)
{
while(j<=i)
{
sum=sum+j;
j++;
}
i++;
}
printf("sum of series is %d",sum);
break;
case 3:
printf("%d \t",second);
do
{
do
{
sum=sum+j;
j++;
}while(j<=i);
}while(i<=n);
printf("sum of series is %d",sum);
break;
default:
printf("wrong choice");
}
}*/









/*18.
#include<stdio.h>
void main()
{
int i,j,s,opt;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number of which you want multiplication table of \n" );
scanf("%d",&i);
switch(opt)
{
case 1:
printf("multiplicatio table is \n");
for (j=1;j<=10;j++)
{
s=i*j;
printf("%d x %d = %d \n",i,j,s);
}
break;
case 2:
printf("multiplication table is \n");
while(j<=10)
{
s=i*j;
printf("%d x %d = %d \n",i,j,s);
j++;
}
break;
case 3:
do
{
s=i*j;
printf("%d x %d = %d \n",i,j,s);
j++;
}while(i<=10);
break;
default:
printf("wrong choice");
}
}*/










/*19.
#include<stdio.h>
void main()
{
int i=1,opt,num;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number you want factor of \n" );
scanf("%d",&num);
switch(opt)
{
case 1:
printf("the factors of %d are \n",num);
for (i=1;i<=num;i++)
{
if(num%i==0)
printf("%d \n",i);
}
break;
case 2:
printf("the factors of %d are \n",num);
while(i<=num)
{
if(num%i==0)
printf("%d \n",i);
i++;
}
break;
case 3:
printf("the factors of %d are \n",num);
do
{
if(num%i==0)
printf("%d \n",i);
i++;
}while(i<=num);
break;
default:
printf("wrong choice");
}
}*/











/*20.
#include<stdio.h>
void main()
{
int i=1,j,c,opt,num;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number you want prime factor of \n" );
scanf("%d",&num);
switch(opt)
{
case 1:
printf("the prime factors of %d are \n",num);
for (i=1;i<=num;i++)
{
if(num%i==0)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
printf("%d \n",i);
}
}
break;
case 2:
printf("the prime factors of %d are \n",num);
while(i<=num)
{
if(num%i==0)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
printf("%d \n",i);
i++;
}
}
break;
case 3:
printf("the prime factors of %d are \n",num);
do
{
if(num%i==0)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
printf("%d \n",i);
i++;
}
}while(i<=num);
break;
default:
printf("wrong choice");
}
}*/











/*21.
#include<stdio.h>
void main()
{
int i,opt,num,num1,rem,sum=0;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number \n" );
scanf("%d",&num);
num1=num;
switch(opt)
{
case 1:
for (i=num1;i>0; )
{
rem=i%10;
sum=sum*10+rem;
i=i/10;
}
if(sum==num)
printf("the number is pallindrome number \n");
else
printf("the number is not a pallindrome number \n");
break;
case 2:
while(num1!=0)
{
rem=num1%10;
sum=sum*10+rem;
num1=num1/10;
}
if(sum==num)
printf("the number is a pallindrome number \n");
else
printf("the number is not a pallindrome number \n");
break;
case 3:
do
{
rem=num1%10;
sum=sum*10+rem;
num1=num1/10;
}while(num1>0);
if(sum==num)
printf("the number is pallindrome number \n");
else
printf("the number is not a pallindrome number \n");
break;
default:
printf("wrong choice");
}
}*/










/*22.
#include<stdio.h>
#include<math.h>
void main()
{
int i,opt,num,num1,d,rem,res=0;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter the number \n" );
scanf("%d",&num);
printf("enter the digits the number contains\n");
scanf("%d",&d);
num1=num;
switch(opt)
{
case 1:
for (i=num1;i>0; )
{
rem=i%10;
res=res+pow(rem,d);
i=i/10;
}
if(res==num)
printf("the number is armstrong number \n");
else
printf("the number is not armstrong number \n");
break;
case 2:
while(num1!=0)
{
rem=num1%10;
res=res+pow(rem,d);
num1=num1/10;
}
if(res==num)
printf("the number is armstrong number \n");
else
printf("the number is not armstrong number \n");
break;
case 3:
do
{
rem=num1%10;
res=res+pow(rem,d);
num1=num1/10;
}while(num1>0);
if(res==num)
printf("the number is armstrong number \n");
else
printf("the number is not armstrong number \n");
break;
default:
printf("wrong choice");
}
}*/











/*23.
#include<stdio.h>
void main()
{
int i,opt,num1,num2;
printf("enter the choice of loop \n 1. for 2. while 3. do while \n");
scanf("%d",&opt);
printf("enter two numbers \n" );
scanf("%d%d",&num1,&num2);
switch(opt)
{
case 1:
for (i=num1;num2>0; )
{
num1++;
num2--;
}
printf("result is %d \n",num1);
break;
case 2:
while(num2>0)
{
num1++;
num2--;
}
printf("result is %d \n",num1);
}
}
break;
case 3:
do
{
num1++;
num2--;
}while(num2>0);
printf("result is %d \n",num1);
break;
default:
printf("wrong choice");
}
}*/


/*24#include<stdio.h>
void main()
{
int i,j,c=0;
for (i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
c++;
printf("%d",c);
}
printf("\n");
}
}*/





/*25.#include<stdio.h>
void main()
{
int fac=1,sum=0,i,n,n1,digit;
printf("enter the number \n");
scanf("%d",&n);
n1=n;
while(n1>0)
{
fac=1;
digit=n1%10;
for (i=1;i<=digit;i++)
{
fac=fac*i;
}
sum=sum+fac;
n1=n1/10;
}
if (sum==n)
printf("strong number ");
else
printf("not a strong no.");
}*/
























































