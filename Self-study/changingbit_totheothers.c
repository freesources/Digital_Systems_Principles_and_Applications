#include <stdio.h>  
#include <math.h>

void main()  
{  
	int a[1000];
	int n,i,s,t;
	s=0;
	
	printf("Nhap vao so loai nhi phan: ");  scanf("%d",&n);  
for (i=0;n>0;i++)
{
t=pow(2,i)*(n%10);
s=s+t;
n=n/10;
}
printf("%d",s);
}
