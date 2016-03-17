#include<stdio.h>
#include<stdlib.h>

#define LENGTH sizeof(struct Node);
typedef int Elem;

struct Node
{
	Elem data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *LINKLIST;

//��ʼ����������һ��������
LINKLIST IniteList()
{
	LINKLIST head;
	head = NULL;
	return head;
}

//�½���������һ����һ���ڵ������
/*LINKLIST CreateList()
{

}*/

//������ӡ����
int printList(LINKLIST h)
{
	//���ش�ӡ�����0��ʾ�����ݣ�1��ʾ��ӡ�ɹ����
	LINKLIST pt = h;
	if(pt->next == NULL)
	{
		printf("sorry,there is nothing!");
		return 0;
	}
	while(pt)
	{
		printf("%d\n",pt->data);
		pt = pt->next;
	}
	printf("\n");
	return 1;
}

//������ĳ��ȣ�����������
int ListLength(LINKLIST h)
{
	LINKLIST pt = h;
	int len = 0;
	while(pt)
	{
		len++;
		pt = pt->next;
	}
	return len;
}

//������β����ӽ�㣬������
LINKLIST AddNodeInLast(LINKLIST h,Elem e)
{
	LINKLIST head,pt,p;
	pt = head = h;
	p = (LINKLIST)malloc(sizeof(struct Node));
	p->data = e;
	p->next = NULL;
	if(pt == NULL)
		head = p;
	else
	{
		while(pt->next)
		{
			pt = pt->next;
		}
		pt->next = p;
	}
	return head;	
}


//�������β��ӽ�㣬������
LINKLIST AddNode(LINKLIST h)
{
	LINKLIST head,pt,p;
	pt = h;
	p = (LINKLIST)malloc(sizeof(struct Node));
	printf("������Ҫ��ӵ����ݣ�");
	scanf("%d",&p->data);
	p->next = NULL;
	if(pt == NULL)
	{
		head = p;
	}
	else
	{
		while(pt ->next)
		{
			pt = pt->next;
		}
		pt->next = p;
	}
	return head;
}

//���ڵ���뵽ָ��λ��
LINKLIST InsertNode(LINKLIST h,int i,Elem e)
{
	LINKLIST head,pt,p;
	int j=1;
	pt = head = h;
	p = (LINKLIST)malloc(sizeof(NODE));
	p->data = e;
	p->next = NULL;

	if(i<1)
	{
		printf("error");
		exit(1);
	}
	if(pt && i>ListLength(h))
	{
		while(pt->next)
		{
			pt = pt->next;
		}
		pt->next = p;
	}
	else if(pt == NULL)
	{
		head = p;
	}
	else
	{
		if(i == 1)
		{
			head = p;
		}
		else
		{
			for(j=1;j<i;j++)
			{
				pt = pt->next;
			}
			pt->next = p;
		}
	}
	return head;
}

//ɾ�������е�ĳλ�õĽ��
LINKLIST ListDelete(LINKLIST h,int i)
{
	LINKLIST pt,tmp;
	int j;
	pt = h;
	tmp = (LINKLIST)malloc(sizeof(NODE));
	if(i<1 || i>ListLength(h) || h == NULL)
	{
		printf("error");
		exit(1);
	}
	if(pt && i<ListLength(h))
	{
		for(j=1;j<i;j++)
		{
			pt = pt->next;
		}
		tmp = pt->next;
		pt->next = tmp->next;
		free(tmp);		
	}
	return pt;


}






void main()
{

}