#pragma once

#include<iostream>

#define MAXQSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0

typedef int BiTree;	//���д洢������

typedef struct QNode
{
	BiTree data;
	struct QNode* next;
} QNode, * QueuePtr;

typedef struct
{
	QueuePtr front; // ��ͷָ��
	QueuePtr rear;  // ��βָ��
} LinkQueue;

typedef struct Queue
{
	BiTree* base; // �����������Ա
	int front; // ����ͷ����
	int rear;  // ����β����
} Queue;
//˳��ѭ�����еĽṹ

Status InitQueue(Queue& Q);//���еĳ�ʼ��
Status EnQueue(Queue& Q, BiTree e);//�����
Status DeQueue(Queue& Q);//������
Status QueueTraverse(Queue Q);//���еı���

Status InitQueue(LinkQueue& Q);//���еĳ�ʼ��
Status EnQueue(LinkQueue& Q, BiTree e);//�����
Status DeQueue(LinkQueue& Q);//������
Status QueueTraverse(LinkQueue Q);//���еı���

Status DeQueue(Queue& Q, BiTree& e);//��������һ�ִ�����ʽ
