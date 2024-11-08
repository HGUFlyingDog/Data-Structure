#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXQSIZE 100

#include<iostream>
using namespace std;

typedef int QElemtype;	//���д洢������

typedef int Status;
#define OK 1
#define ERROR 0

typedef struct QNode
{
    QElemtype data;
    struct QNode* next;
} QNode, * QueuePtr;

typedef struct
{
    QueuePtr front; // ��ͷָ��
    QueuePtr rear;  // ��βָ��
} LinkQueue;


typedef struct Queue
{
	QElemtype* base; // �����������Ա
	int front; // ����ͷ����
	int rear;  // ����β����
} Queue;
//˳��ѭ�����еĽṹ

Status InitQueue(Queue& Q);
Status EnQueue(Queue& Q, QElemtype e);
Status DeQueue(Queue& Q);
Status QueueTraverse(Queue Q);

Status InitQueue(LinkQueue& Q);
Status EnQueue(QNode& Q, QElemtype e);
Status DeQueue(QNode& Q);
Status QueueTraverse(QNode Q);
