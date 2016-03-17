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

//初始化链表，产生一个空链表
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


//向链表表尾添加结点，有输入
LINKLIST AddNode(LINKLIST h)
{
	LINKLIST head,pt,p;
	pt = h;
	p = (LINKLIST)malloc(sizeof(struct Node));
	printf("请输入要添加的数据：");
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

//将节点插入到指定位置
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

//删除链表中的某位置的结点
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