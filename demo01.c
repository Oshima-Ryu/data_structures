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

//初始化链表，产生一个空链表2
LINKLIST IniteList()
{
	LINKLIST head;
	head = NULL;
	return head;
}

//新建链表，生成一个有一定节点的链表
/*LINKLIST CreateList()
{

}*/

//遍历打印链表
int printList(LINKLIST h)
{
	//返回打印结果，0表示无数据，1表示打印成功完成
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

//求链表的长度，返回链表长度
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

//向链表尾部添加结点，无输入
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