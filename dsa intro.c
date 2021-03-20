

// date - 23/7/2020



/*1.

#include<stdio.h>
void main()
{
int i,n;
printf("enter total number of elements to be added\n");
scanf("%d",&n);
int ar[n];
printf("enter the array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("the array elements entered are\n");
for(i=0;i<n;i++)
{
printf("%d \t",ar[i]);
}

printf("\nthe reversed type array are\n");
for(i=n-1;i>=0;i--)
{
printf("%d",ar[i]);
}
}

*/





/*2.

#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the total elements of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
int ar[n];
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
sum=sum+ar[i];
}
printf("\nthe sum of the array elements is %d ,sum");
}


*/





/*3.

#include<stdio.h>
void main()
{
int n,i;
printf("enter the total elements of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
int ar[n],ar1[n];
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
ar1[i]=ar[i];
}
printf("\narray after copying\n");
for(i=0;i<n;i++)
printf("%d \t",ar1[i]);
}

*/




/*4. 


#include<stdio.h>
void main()
{
int n,i,j;
printf("enter the total elements of the array\n");
scanf("%d",&n);
int ar[n],c=0;
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ar[i]==ar[j])
{
c++;
break;
}
}
}
printf("the total number of duplicate elements are  %d \n",c);
}

*/





/*5.



#include<stdio.h>
void main()
{
int n,i,j;
printf("enter the total elements of the array\n");
scanf("%d",&n);
int ar[n],freq[n],c;
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
freq[i]=-1;
}
for(i=0;i<n;i++)
{
c=1;
for(j=i+1;j<n;j++)
{
if(ar[i]==ar[j])
{
c++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=c;
}
}
printf(" the unique elements in the array are\n");
for(i=0;i<n;i++)
{
if(freq[i]==1)
printf("%d \t",ar[i]);
}
printf("\n");
}


*/





/*6. not working


#include<stdio.h>
void main()
{
int a[100],b[100],c[100],s1,s2,s3,i,j,k;
printf("enter the total elements to be stored in the array 1\n");
scanf("%d",&s1);
printf("enter the elements of array 1\n");
for(i=0;i<s1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the total elements to be stored in the array 2\n");
scanf("%d",&s2);
printf("enter the elements of array 2\n");
for(i=0;i<s2;i++)
{
scanf("%d",&b[i]);
}
s3=s1+s2;
for(i=0;i<s1;i++)
{
c[i]=a[i];
{
for(j=0;j<s2;j++)
{
c[i]=b[j];
i++;
}
}
}
for(i=0;i<s3;i++)
{
for(k=0;j<s3-1;k++)
{
if(c[k]<=c[k+1])
{
j=c[k+1];
c[k+1]=c[k];
c[k]=j;
}
}
}
//printf("the merged array in accending order is");
for(i=0;i<s3;i++)
{
printf(" %d \t",c[i]);
}
printf("\n"); 
}


*/








/*7.


#include<stdio.h>
void main()
{
int n,i,mx,mn;
printf("enter the size of the array\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements of array 1\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
mx=ar[0];
mn=ar[0];
for(i=0;i<n;i++)
{
if(ar[i]>mx)
{
mx=ar[i];
}
if(ar[i]<mn)
{
mn=ar[i];
}
}
printf("the maximum value of the array elements is %d \n the minimum value of the array elements is %d\n",mx,mn);
}

*/






// date - 30/7/2020


/* 1. 

#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i, *data, *cpydata;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
data=(int*)malloc(n*sizeof (int));
cpydata=(int*)malloc(n*sizeof (int));
if(data==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",data+i);
}
for(i=0;i<n;i++)
{
cpydata=data;
}
for(i=0;i<n;i++)
{
if(*data<*(data+i))
{
*data=*(data+i);
}
}
printf("the maximum value of the array elements is %d \n",*data);
for(i=0;i<n;i++)
{
if(*cpydata>*(cpydata+i))
{
*cpydata=*(cpydata+i);
}
}
printf("the minimum value of the array elements is %d\n",*cpydata);
}

*/





/* 2.

#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,n,i;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof (int));
if(p==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
printf("the array is \n");
for(i=0;i<n;i++)
{
printf("%d\t",*(p+i));
}
printf("\nthe array in the reverse order is \n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",*(p+i));
}
printf("\n");
}


*/





/* 3.


#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,n,i,a,flag=0;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof (int));
if(arr==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",arr+i);
}
printf("enter the number you want to search:\n");
scanf("%d",&a);
for(i=0;i<n;i++)
{
if(a==*(arr+i))
flag=1;
}
if(flag==1)
printf("number found\n");
else
printf("number not found\n");
}


*/




/* 4.


#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,n,i,j,t;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
a=(int*)malloc(n*sizeof (int));
if(a==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		if(*(a+i)<*(a+j))
		{
		t=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=t;
		}
	}
}
printf("after sorting in ascending order\n");
for(i=0;i<n;i++)
{
printf("%d\t",*(a+i));
}
printf("\n");
}


*/





/*5.

#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i, *ar,num1,num2,*j,*k,;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
ar=(int*)malloc(n*sizeof (int));
if(ar==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",ar+i);
}
printf("enter the first and last number of your range\n");
scanf("%d\n%d",&num1,&num2);
for(i=0;i<n;i++)
{
if(num1==*(ar+i))
{
j=(ar+i);
}
}
for(i=0;i<n;i++)
{
if(num2==*(ar+i))
{
k=(ar+i);
}
}
for(i=*(j-1);i<=*k;i++)
{
printf("%d\t",*(ar+i));
}
}


*/




/* 6.


#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j,flag;
float *data,*nge;
printf("enter the total no. of elements in the array\n");
scanf("%d",&n);
data=(float*)malloc(n*sizeof (float));
nge=(float*)malloc(n*sizeof (float));
if(data==NULL)
{
printf("memory  not allocated");
exit(0);
}
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%f",data+i);
}
for(i=0;i<n;i++)
{
flag=0;
	for(j=i+1;j<n;j++)
	{
		if(*(data+i)<*(data+j))
		{
		*(nge+i)=*(data+j);
		flag++;
		break;
		}
	}
	if(i==n-1||flag==0)
	{
	*(nge+i)==-1;
	}
}
for(i=0;i<n;i++)
{
printf("the next greater element is %d\t %f \n",i+1,*(nge+i));
}
printf("\n");
}


*/




/* 7.


#include<stdio.h>
#include<stdlib.h>
int count(int **a,int n)
{
int i,j,ctr=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
{
ctr++;
}
}
}
return ctr;
}
int add(int **a,int n)
{
int i,j;
int sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j&&j>1)
{
sum+=a[i][j];
}
}
}
return sum;
}
int product(int **a,int n)
{
int i,j;
int prod=1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=n/2)
{
prod=prod*a[i][j]*a[i][n-1-i];
}
else
{
prod=prod*a[i][j];
}
}
}
return prod;
}
void display_minor(int **a,int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((i+j)!=(n-1)&&(i+j)>=n)
{
printf("%d\t",a[i][j]);
}
}
printf("\n");
}
}
void main()
{
int n,r,c,i,j,ctr,sum=0,prod=0;
printf("enter the size of n x n 2D array\n");
scanf("%d",&n);
r=n;
c=n;
int *arr[r];
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof (int));
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
arr[i][j]=rand()%10;
}
}
printf("\n the array is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
ctr=count(arr,n);
printf("\n the number of non zero elements are\t %d",ctr);
printf("\n");
sum=add(arr,n);
printf("\n the sum of elements above leading diagonal is \t %d",sum);
printf("\n");
prod=product(arr,n);
printf("\n the product of the diagonals is\t %d",prod);
printf("\n");
printf("\n the elements below minor diagonal is \n");
display_minor(arr,n);
}


*/





// date - 6/8/2020



/*1.


#include<stdio.h>
double simpleinterest(double P,double  R,double T)
{
double si;
si=(P*R*T)/100;
return si;
}
void main()
{
double p,r,t;
double s;
printf("enter the principle,rate and time to calculate the simple interest\n");
scanf("%le%le%le",&p,&r,&t);
s=simpleinterest(p,r,t);
printf("the simple interest is\t %le \n",s);
}


*/




/* 2.

#include<stdio.h>
void rev_array(int *ar,int n)
{
for(int i=0;i<n;i++)
{
printf("%d\t",*ar);
ar--;
}
}
void main()
{
int i,a[100],s;
printf("enter the size of the array\n");
scanf("%d",&s);
printf("enter the array elements\n");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
printf("\n the array elements are\n");
for(i=0;i<s;i++)
{
printf("%d\t",a[i]);
}
printf("the reversed array elements are\n");
rev_array(&a[s-1],s);
}


*/






/* 3.


#include<stdio.h>
void swap_val(int n1,int n2)
{
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("after swap the numbers are\n");
printf("%d\t%d\n",n1,n2);
}
void swap_add(int *n1,int *n2)
{
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
printf("after swap the numbers are\n");
printf("%d\t%d\n",*n1,*n2);
}
void main()
{
int num1,num2;
printf("enter any two numbers\n");
scanf("%d%d",&num1,&num2);
swap_val(num1,num2);
swap_add(&num1,&num2);
}


*/





/*4.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud
{
char name[20];
int roll;
float mark;
};
int main()
{
struct stud s;
printf("enter the details of student \n");
printf("\nenter roll no\n");
scanf("%d",&s.roll);
printf("\nenter the first name\n");
scanf("%s",s.name);
printf("\nenter marks\n");
scanf("%f",&s.mark);
printf("\ndisplaying information\n");
printf("\nroll no\t\t%d",s.roll);
printf("\nfirst name\t");
printf("%s",s.name);
printf("\nmarks\t\t");
printf("%f",s.mark);
printf("\n");
return 0;
}


*/




/*5






/* 6.


#include<stdio.h>
struct distance
{
int km;
float m;
}d1,d2,sum;
void main()
{
printf("enter the 1st distance\n");
printf("\nin kilometer\t");
scanf("%d",&d1.km);
printf("\n in meters\t");
scanf("%f",&d1.m);
printf("\nenter the 2nd distance\n");
printf("\nin kilometer\t");
scanf("%d",&d2.km);
printf("\n in meters\t");
scanf("%f",&d2.m);
sum.km=d1.km+d2.km;
sum.m=d1.m+d2.m;
while(sum.m>1000.0)
{
sum.m=sum.m-1000;
sum.km++;
}
printf("\n sum of distances=\t%d kilometer  %f meters\n",sum.km,sum.m);
}



*/







// date - 13/8/2020



/* 1.

#include<stdio.h>
void main()
{
int A[10][10],i,j,r,c,size=0;
printf("enter the row size and column size of matrix A:\n");
scanf("%d%d",&r,&c);
printf("enter the elements for the matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
printf("\n");
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(A[i][j]!=0)
{
size++;
}
}
}

printf("the entered matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}

//sparse row wise:

int B[size+1][3];
int k1=1;

B[0][0]=r;
B[0][1]=c;
B[0][2]=size;

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(A[i][j]!=0)
{
B[k1][0]=i;
B[k1][1]=j;
B[k1][2]=A[i][j];
k1++;
}
}
}

printf("\n the sparse matrix triplet representation in row wise is:\n");
for(i=0;i<k1;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",B[i][j]);
}
printf("\n");
}


//sparse column wise:

int C[3][size+1];
int k2=1;

C[0][0]=r;
C[1][0]=c;
C[2][0]=size;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(A[i][j]!=0)
{
C[0][k2]=i;
C[1][k2]=j;
C[2][k2]=A[i][j];
k2++;
}
}
}

printf("\n the sparse matrix triplet representation in column wise is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<k2;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
}


*/





/* 2.
#include<stdio.h>
#include<stdlib.h>
void main()
{
int row, col,i,j;
printf("enter the number of rows and coloumns\n");
scanf("%d%d",&row,&col);
int **list=(int**)malloc(row*sizeof(int *));
for(int i=0;i<row;i++)
{
list[i]=(int*)malloc(col*sizeof(int));
}

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
list[i][j]=rand()%10;
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",list[i][j]);
}
printf("\n");
}
}

*/






/* 3.

#include<stdio.h>
void main()
{
int t1,t2,i,a[20],b[20],sum[20];
printf("for polynomial 1\n");
printf("enter the total number of terms to be entered\n");
scanf("%d",&t1);
printf("enter the coefficient of polynomial in the form of constant+a1x+b1x^2+c1x^3....... and so on\n");
for(i=0;i<t1;i++)
{
scanf("%d",&a[i]);
}
printf("coefficients of polynomial 1 is:\n");
for(i=0;i<t1;i++)
{
printf(" %d x^%d \n",a[i],i);
}
printf("\n");
printf("for polynomial 2\n");
printf("enter the total number of terms to be entered\n");
scanf("%d",&t2);
printf("enter the coefficient of polynomial in the form of constant+a2x+b2x^2+c2x^3....... and so on\n");
for(i=0;i<t2;i++)
{
scanf("%d",&b[i]);
}
printf("\ncoefficients of polynomial 2: \n");
for(i=0;i<t2;i++)
{
printf(" %d x^%d \n",b[i],i);
}
printf("\n");

if(t2>t1)
{
for(i=t1;i<t2;i++)
{
b[i]=0;
}
for(i=0;i<t2;i++)
{
sum[i]=a[i]+b[i];
}
printf("the coefficients of the sum polynomial is\n");
for(i=0;i<t2;i++)
{
printf(" %d x^%d \n",sum[i],i);
}
printf("\n");
}
else
{
for(i=t2;i<t1;i++)
{
a[i]=0;
}
for(i=0;i<t1;i++)
{
sum[i]=a[i]+b[i];
}
printf("the coefficients of the sum polynomial is\n");
for(i=0;i<t1;i++)
{
printf(" %d x^%d \n",sum[i],i);
}
printf("\n");
}
}


*/




/* 4. not working

#include<stdio.h>
void main()
{
int i,j,size1,size2;
printf("for polynomial 1\n");
printf("enter the total number of terms to be entered\n");
scanf("%d",&size1);
printf("for polynomial 2\n");
printf("enter the total number of terms to be entered\n");
scanf("%d",&size2);
int a[size1],b[size2],prod[size1+size2];

printf("enter the coefficient of polynomial 1 in the form of constant+a1x+b1x^2+c1x^3....... and so on\n");
for(i=0;i<size1;i++)
{
scanf("%d",&a[i]);
}
printf("coefficients polynomial 1 is:\n");
for(i=0;i<size1;i++)
{
printf(" %d x^%d \n",a[i],i);
}
printf("\n");

printf("enter the coefficient of polynomial 2 in the form of consant+a2x+b2x^2+c2x^3....... and so on\n");
for(i=0;i<size2;i++)
{
scanf("%d",&b[i]);
}
printf("\ncoefficients polynomial 2: \n");
for(i=0;i<size2;i++)
{
printf(" %d x^%d \n",b[i],i);
}
printf("\n");

for(i=0;i<size1+size2;i++)
{
prod[i]=0;
}
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{
if(a[i]!=0&b[i]!=0)
prod[i+j]+=(a[i]*b[i]);
}
}
printf("\ncoefficients of product polynomial is: \n");
for(i=size1+size2-1;i>=0;i--)
{
if(prod[i]!=0)
{
if(i!=0)
{
printf(" %d x^%d \n ",prod[i],i);
}
else 
{
printf(" %d x^%d \n",prod[i],i);
}
}
}
printf("\n");
}

*/





// add matrix 


/*


#include<stdio.h>
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
printf("enter the second matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
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
printf("second matrix is \n");
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
}



*/





//sub matrix

/*

#include<stdio.h>
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
printf("enter the second matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
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
printf("second matrix is \n");
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
}

*/





// multiply matrix


/*

#include<stdio.h>
#include<stdlib.h>
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
printf("enter the number of rows and columns of second matrix \n");
scanf("%d \t %d",&p,&q);
int b[p][q];
if(n!=p)
{
printf("matrix multiplication not possible\n");
exit (0);
}
else
{
printf("enter the second matrix \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
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
c[i][j]=sum;
sum=0;
}
}
printf("multiplication of matrices is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("\t \t %d",c[i][j]);
}
printf("\n");
}
}
}


*/





// transpose matrix


/*


#include<stdio.h>
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
}

*/










































































































