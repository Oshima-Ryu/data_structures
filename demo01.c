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

//��ʼ����������һ��������2
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
LINKLIST AddNode(LINKLIST h,Elem e)
{
	LINKLIST head,pt,p;
	pt = head = h;
	p = (LINKLIST)malloc(sizeof(struct Node));
	p->data = e;
}





void main()
{

}