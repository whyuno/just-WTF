#include<stdio.h>
#include<stdlib.h>
int u;
typedef struct
list
{
	int n;
	struct list *p;
} *list;
list fun()
{
	int x;
	list h,t;
	t=(list)malloc(sizeof(list));
	h=(list)malloc(sizeof(list));
	t->p=NULL;
	h->p=NULL;
	scanf("%d",&x);
	while(x!=990122)
	{
		(*h).n=x;
		t=h;
		h=(list)malloc(sizeof(list));
		h->p=t;
		scanf("%d",&x);
		u++;
	}
	return t;
}
void gout(list l)
{
	list m;
	m=l;
    while(m->p)
	{
		printf("%d  ",m->n);
		m=m->p;
	}
	printf("%d  ",m->n);
}
list sad(list l,int i,int c)
{
	list k,t;
	int m;
	t=l;
	if(i==0)
	{
		k=(list)malloc(sizeof(list));
		k->n=c;
		k->p=l;
		l=k;
		gout(l);
	}
	else
	{m=1;
	while(m!=i)
	{
	   t=t->p;
	   m++;
	}
	k=(list)malloc(sizeof(list));
	k->n=c;
	k->p=t->p;
	t->p=k;
	gout(l);
	}
	return l;
}
void freedom(list l)
{
	list t;
	t=l;
	while(t->p)
	{
		free(t);
		l=l->p;
		t=l;
	}
	free(t);
}
int main()
{
	int i,c;
	list l;
	printf("�����ʼ��\n");
	printf("����������ϣ�������990122�ӻس�������!\n");
	l=fun();
	while(!u)
	{
		printf("����һ���ձ�!!!!!!\n");
		l=fun();
	}
	gout(l);
    while(1)
    {
    	printf("����λ��(0~%d):\n",u);
    	scanf("%d",&i);
    	if(i>=0&&i<=u)
    	break;
    	else
    	printf("error\n");
    }
    printf("��������:\n");
    scanf("%d",&c);
    l=sad(l,i,c);
    freedom(l);
}