
//ADDITION OF 2D ARRAY/MATRIX



/*#include<stdio.h>
void main()
{
int i,j,r,c;
printf("enter the number of rows and columns \n");
scanf("%d \t %d",&r,&c);
int sum[r][c],a[r][c],b[r][c];
printf("enter the first matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("first matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",a[i][j]);
}
printf("\n");
}
printf("enter the second matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}printf("second matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
printf("\n");
}
printf("sum of matrices is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",sum[i][j]);
}
printf("\n");
}
}*/




//SUBTRACTION OF 2D ARRAY/MATRIX




/*#include<stdio.h>
void main()
{
int i,j,r,c;
printf("enter the number of rows and columns \n");
scanf("%d \t %d",&r,&c);
int sub[r][c],a[r][c],b[r][c];
printf("enter the first matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("first matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",a[i][j]);
}
printf("\n");
}
printf("enter the second matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}printf("second matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sub[i][j]=a[i][j]-b[i][j];
}
printf("\n");
}
printf("sum of matrices is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t \t %d",sub[i][j]);
}
printf("\n");
}
}*/






//MATRIX MULTIPLICATION
// NOT WORKING



/*#include<stdio.h>
void main()
{
int i,j,k,m,n,p,q,sum=0;
printf("enter the number of rows and columns first matrix\n");
scanf("%d \t %d",&m,&n);
int a[m][n];
printf("enter the first matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("first matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t \t %d",a[i][j]);
}
printf("\n");
}
printf("enter the number of rows and columns of second matrix \n");
scanf("%d \t %d",&p,&q);
int b[p][q];
if(n!=p)
printf("matrix multiplication not possible");
else
printf("enter the second matrix \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}
printf("second matrix is \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\t \t %d",b[i][j]);
}
printf("\n");
}
int c[m][q];
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[m][q]=sum;
sum=0;
}
}
printf("multipliccatin of matrices is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("\t \t %d",c[i][j]);
}
printf("\n");
}
}*/






//TRANSPOSE OF MATRIX


/*#include<stdio.h>
void main()
{
int i,j,m,n;
printf("enter the number of rows and columns of a matrix\n");
scanf("%d \t %d",&m,&n);
int a[m][n];
printf("enter the matrix values \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("original matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t \t %d",a[i][j]);
}
printf("\n");
}
printf("transposed matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t \t %d",a[j][i]);
}
printf("\n");
}
}*/





//BINARY SEARCH


/*#include<stdio.h>
void main()
{
int i,m,first=0,last,mid,num;
printf("enter the total number elments of array you want to enter \n");
scanf("%d",&m);
int a[m];
last=m-1;
printf("\nenter the values of array in sorted type\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("array looks like \n");
for(i=0;i<m;i++)
{
printf("%d \t",a[i]);
}
printf("\nenter the number you want to search from the array \n");
scanf("%d",&num);
while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==num)
{
printf("\n number found at position %d ",mid+1);
break;
}
else if(a[mid]<num)
first=mid+1;
else
last=mid -1;
}
if(first>last)
printf("not found, %d is not in the array",num);
}*/








//SORTING WITH SEARCHING


/*#include<stdio.h>
void main()
{
int i,j,m,first=0,temp,last,mid,num;
printf("enter the total number elments of array you want to enter \n");
scanf("%d",&m);
int a[m];
last=m-1;
printf("\nenter the values of array \n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("array looks like \n");
for(i=0;i<m;i++)
{
printf("%d \t",a[i]);
}
for(i=0;i<m-1;i++)
{
for(j=0;j<m-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nafter sorting array looks like \n");
for(i=0;i<m;i++)
{
printf("%d \t",a[i]);
}
printf("\nenter the number you want to search from the array \n");
scanf("%d",&num);
while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==num)
{
printf("\nnumber found at position %d ",mid+1);
break;
}
else if(a[mid]<num)
first=mid+1;
else
last=mid -1;
}
if(first>last)
printf("not found, %d is not in the array",num);
}*/










//   ENTER MARKS OF 5 SUBJECTS WITH ROLL NUMBER AND TOTAL MARKS OF EACH STUDENT 
//   ALSO FIND THE MAXIMUM AND MINMUM MARKS FROM THE TOTAL COLOUMN





/*
#include<stdio.h>
void main()
{
int a[5][7],sum=0,max,min,i,j;
for(i=0;i<5;i++)
{
	for(j=0;j<6;j++)
	{
		if(j==0)
			{
			printf("enter roll number = ");
			scanf("%d",&a[i][0]);
			}
		else
			{
			printf("enter marks = ");
			scanf("%d",&a[i][j]);
			}
	}
}
for(i=0;i<5;i++)
{
	for(j=1;j<7;j++)
	{
		if(j==6)
		a[i][6]=sum;
		else
		sum=sum+a[i][j];
	}
sum=0;
}
max=a[0][6];
min=a[0][6];
for(i=0;i<5;i++)
{
	for(j=0;j<7;j++)
	{
		if(max<a[i][j])
		max=a[i][6];
		if(min>a[i][j])
		min=a[i][6];
	}
}
printf("the final table is \n\n");
printf("\tROLL NO\tSUB1\tSUB2\tSUB3\tSUB4\tSUB5\tTOTAL\n");
for(i=0;i<5;i++)
{
	for(j=0;j<7;j++)
	{
	printf("\t %d",a[i][j]);
	}
printf("\n");
}
printf("\n maximum marks is %d \n\n minimum marks is %d\n\n",max,min);
}	*/	
				






















































