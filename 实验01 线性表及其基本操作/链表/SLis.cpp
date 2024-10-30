#include"SList.h"

void ListLength(SListNode* plist)
{
	int count = 0;
	while (plist)
	{
		count++;
		plist = plist->next;
	}
	printf("链表长度为：%d\n",count); // 打印链表结束的标志
}

void SListPrint(SListNode* plist)
{
	while (plist)
	{
		printf("%d -> ", plist->data); // 增加箭头来表示链表的连接关系
		plist = plist->next;
	}
	printf("NULL\n"); // 打印链表结束的标志
}

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* Node = (SListNode*)malloc(sizeof(SListNode)); // 动态分配内存，注释无误
	if (Node == NULL) // 修正为 == 进行比较
	{
		perror("malloc fail");
		return NULL; // 添加 return NULL
	}
	Node->data = x;
	Node->next = NULL;
	return Node;
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* cur = *pplist;
	if (*pplist == NULL) // 如果链表为空
	{
		*pplist = newnode; // 将新节点赋值为头节点
	}
	else
	{
   		while (cur->next) // 遍历链表直到找到最后一个节点
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
void SListPushBackByValue(SListNode* plist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* cur = plist;
	if (plist == NULL) // 如果链表为空
	{
		plist = newnode; // 将新节点赋值为头节点
	}
	else
	{
		while (cur->next) // 遍历链表直到找到最后一个节点
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);

	if (newnode == NULL || *pplist == NULL)
	{
		exit;
	}
	else
	{
		SListNode* cur = newnode;
		cur->next = *pplist;
		*pplist = newnode;
	}
}

void SListPopBack(SListNode** pplist)
{
	SListNode* cur = *pplist;
	if (*pplist == NULL)
	{
		return; 
	}
	else
	{
		while (cur->next->next)
		{
			cur = cur->next;
		}
	}
	free(cur->next);
	cur->next = NULL;
}

void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;

	*pplist = cur->next;
	free(cur);
}

//SListNode* SListFind(SListNode* plist, SLTDateType x)
//{
//    SListNode* cur = plist;
//    int pos = 0;
//    while (cur->data!=x)
//    {
//        cur = cur->next;
//        pos++;
//    }
//
//    if (cur->data == x)
//    {
//        return pos;
//    }
//    else
//    {
//        return NULL;
//    }
//}
//这里要返回节点的指针，方便后续对于节点的访问

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	SListNode* cur = plist;

	//while (cur->data!=x) 下面的表达方式更好
	while (cur != NULL && cur->data != x)
	{
		cur = cur->next;
	}
	if (cur->data == x)
	{
		return cur;
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	SListNode* temp = pos->next;

	SListNode* newnode = BuySListNode(x);
	if (newnode == NULL) // 检查内存分配是否成功
	{
		return;
	}
	pos->next = newnode;
	newnode->next = temp;
}

void SListEraseAfter(SListNode* pos)
{
	SListNode* temp = pos->next;
	pos->next = pos->next->next;
	free(temp);
}


void TestSList()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPrint(plist);

	SListPushBack(&plist, 3);
	SListPushFront(&plist, 2);//2 1 3
	SListPopBack(&plist);//2 1
	SListPushBack(&plist, 3);//2 1 3
	SListPopFront(&plist);//1 3
	SListPrint(plist);
	SListNode* pos = SListFind(plist, 3);
	SListPrint(pos);

	SListInsertAfter(pos, 6);
	SListPrint(pos);
	SListEraseAfter(pos);
	SListPrint(pos);
	SListPrint(plist);
	ListLength(plist);
}
