#include<stdio.h>
void fun(int p[],int n,int k)
{
	int a,i,num;
	a=p[0];
	printf("%d",a);
	num=i=0;
	printf("%d",p[num]);
	for(;i<n;i++)
	{
		if(k)
			num=(a>p[i])?a:i;
		else
			num=(a>p[i])?i:a;
		a=p[num];
	}
	printf("%d",a);
	p[num]=p[0];
	p[0]=a;
}
int main()
{
	int p[5],i,k,n;
	n=5;
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);
	printf("%d",*p);
	scanf("%d",&k);
	fun(p,n,k);
	for(i=0;i<5;i++)
		printf("%d  ",p[i]);
}