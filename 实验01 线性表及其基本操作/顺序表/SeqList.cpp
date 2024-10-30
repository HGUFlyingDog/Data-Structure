#pragma once
#include"SeqList.h"


void SLInit(SL* ps)//初始化
{
	//创建空间
	ps->a = (SLDataType*)malloc(SLInit_Capacity * sizeof(SLDataType));
	ps->size = 0;
	ps->capacity = SLInit_Capacity;
}

void SLPushBack(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SLPushFront(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);

	//移动数据
	for (int i = (ps->size) + 1; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}

void SLCheckCapacity(SL* ps)
{
	SLDataType* temp;
	if (ps->size == ps->capacity)
	{
		temp = (SLDataType*)realloc(ps->a, 2 * SLInit_Capacity * sizeof(SLDataType));
		if (temp)
		{
			ps->a = temp;
			ps->capacity *= 2;
		}
	}
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLPopFront(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SLPopBack(SL* ps)
{
	ps->size--;
}

int SeqListFind(SL* ps, SLDataType x)
{
	int flag = 0;
	for (int i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			printf("\n%d是第%d个数\n",x, i+1);
			return i;
		}
	}
	if (flag == 0)
	{
		printf("\nNo find!");
		return -1;
	}
	
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	SLCheckCapacity(ps);
	for (int i = (ps->size) + 1; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)
{
	for (int i = pos; i <ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void Fun_test(SL& s)
{
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	//1 2 3
	SLPopFront(&s);
	SLPopBack(&s);
	//2
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);
	SLPushFront(&s, 8);
	//8 7 6 2 4 5 
	SLPrint(&s);
	SeqListFind(&s, 7);
	SeqListInsert(&s, 0, 88);
	SLPrint(&s);
	SeqListErase(&s, 0);
	SLPrint(&s);
}

void A_union_B(SL* A, SL* B)
{
	SL temp;
	SLInit(&temp);
	for (int i = 0; i < B->size; i++)
	{
		SLPushBack(&temp, B->a[i]);
	}
	for (int i = 0; i < A->size; i++)
	{
		int flag = 0;
		for (int j = 0;j < B->size; j++)
		{
			if (A->a[i] == B->a[j])
				flag = 1;
		}
		if (flag==0)
		{
			SLPushBack(&temp, A->a[i]);
		}
	}
	printf("A∪B:");
	SLPrint(&temp);
}

void intersection(SL* A, SL* B)
{
	SL temp;
	SLInit(&temp);
	for (int i = 0; i < A->size; i++)
	{
		for (int j = 0; j < B->size; j++)
		{
			if (A->a[i] == B->a[j])
				SLPushBack(&temp, A->a[i]);
		}
		
	}
	printf("A∩ B:");
	SLPrint(&temp);
}