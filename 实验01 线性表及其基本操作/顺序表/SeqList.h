#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#define SLInit_Capacity 4


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;     // ��Ч���ݸ���
	int capacity; // �ռ�����
}SL;

void SLInit(SL* ps);//��ʼ��
void SLPrint(SL* ps);//��ӡ˳����Ԫ��
void SLCheckCapacity(SL* ps);//���ٿռ�

//˳����ͷ��/β��
void SLPushFront(SL* ps, SLDataType x);
void SLPushBack(SL* ps, SLDataType x);

//˳����ͷɾ/βɾ
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);

// ˳������
int SeqListFind(SL* ps, SLDataType x);
// ˳�����posλ�ò���x
void SeqListInsert(SL* ps, int pos, SLDataType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SL* ps, int pos);



void Fun_test(SL& s);//������ɾ���
void A_union_B(SL* A, SL* B);
void intersection(SL* A, SL* B);