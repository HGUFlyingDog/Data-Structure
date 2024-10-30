#include"SList.h"

void ListLength(SListNode* plist)
{
	int count = 0;
	while (plist)
	{
		count++;
		plist = plist->next;
	}
	printf("������Ϊ��%d\n",count); // ��ӡ��������ı�־
}

void SListPrint(SListNode* plist)
{
	while (plist)
	{
		printf("%d -> ", plist->data); // ���Ӽ�ͷ����ʾ��������ӹ�ϵ
		plist = plist->next;
	}
	printf("NULL\n"); // ��ӡ��������ı�־
}

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* Node = (SListNode*)malloc(sizeof(SListNode)); // ��̬�����ڴ棬ע������
	if (Node == NULL) // ����Ϊ == ���бȽ�
	{
		perror("malloc fail");
		return NULL; // ��� return NULL
	}
	Node->data = x;
	Node->next = NULL;
	return Node;
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* cur = *pplist;
	if (*pplist == NULL) // �������Ϊ��
	{
		*pplist = newnode; // ���½ڵ㸳ֵΪͷ�ڵ�
	}
	else
	{
   		while (cur->next) // ��������ֱ���ҵ����һ���ڵ�
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
	if (plist == NULL) // �������Ϊ��
	{
		plist = newnode; // ���½ڵ㸳ֵΪͷ�ڵ�
	}
	else
	{
		while (cur->next) // ��������ֱ���ҵ����һ���ڵ�
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
//����Ҫ���ؽڵ��ָ�룬����������ڽڵ�ķ���

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	SListNode* cur = plist;

	//while (cur->data!=x) ����ı�﷽ʽ����
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
	if (newnode == NULL) // ����ڴ�����Ƿ�ɹ�
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
