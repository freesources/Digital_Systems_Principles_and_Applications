#include <stdio.h>  
#include <math.h>

void main()  
{  
	int a[1000];
	int i,j;
	long n;
	char A[]="A", B[]="B", C[]="C", D[]="D", E[]="E", F[]="F";
	
	printf("Nhap vao so loai nhi phan: ");  scanf("%d",&n);  

for (i=0;n>0;i++)
{
	if ((n%10000)==0) a[i]=0; 
	else if ((n%10000)==1) 
	a[i]=1;  
	else if ((n%10000)==10) 
	a[i]=2; 
	 else if ((n%10000)==11) 
	 a[i]=3;  
	 else if ((n%10000)==100) 
	 a[i]=4;  
	 else if ((n%10000)==101) 
	 a[i]=5; 
	  else if ((n%10000)==110) 
	  a[i]=6;  
	  else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
		else if ((n%10000)==111)
		a[i]=7; 
	  n=n/1000;
}
for (j=i-1;j>=0;j--)
printf("%d",a[j]);
}
