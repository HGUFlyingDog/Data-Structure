#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 10

#include<iostream>
using namespace std;

typedef int QDatatype;	//���д洢������


typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
    QNode* head;
    QNode* tail;
}QNode;	//��ʽ���еĽṹ

typedef struct Queue
{
    QDatatype* array; // �����������Ա
    int front; // ����ͷ����
    int rear;  // ����β����
    int size; //��������С
    int count //Ŀǰ��С
} Queue;
//˳����еĽṹ



void QueueInit(Queue &pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq);
QDatatype QueueBack(Queue* pq);





