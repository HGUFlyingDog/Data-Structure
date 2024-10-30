#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#define SLInit_Capacity 4


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;     // 有效数据个数
	int capacity; // 空间容量
}SL;

void SLInit(SL* ps);//初始化
void SLPrint(SL* ps);//打印顺序表的元素
void SLCheckCapacity(SL* ps);//开辟空间

//顺序表的头插/尾插
void SLPushFront(SL* ps, SLDataType x);
void SLPushBack(SL* ps, SLDataType x);

//顺序表的头删/尾删
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);

// 顺序表查找
int SeqListFind(SL* ps, SLDataType x);
// 顺序表在pos位置插入x
void SeqListInsert(SL* ps, int pos, SLDataType x);
// 顺序表删除pos位置的值
void SeqListErase(SL* ps, int pos);



void Fun_test(SL& s);//测试增删查改
void A_union_B(SL* A, SL* B);
void intersection(SL* A, SL* B);