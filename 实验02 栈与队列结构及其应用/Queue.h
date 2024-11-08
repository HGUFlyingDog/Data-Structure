#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXQSIZE 100

#include<iostream>
using namespace std;

typedef int QElemtype;	//���д洢������

typedef int Status; 
#define OK 1
#define ERROR 0



//typedef struct QueueNode
//{
//    struct QueueNode* next;
//    QElemtype data;
//    QNode* head;
//    QNode* tail;
//}QNode;	//��ʽ���еĽṹ

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

//Status DestroyQueue(Queue& Q);
//Status EnQueue(Queue* pq, QElemtype x);
//Status QueuePop(Queue* pq);
//int QueueSize(Queue* pq);
//bool QueueEmpty(Queue* pq);
//QElemtype QueueFront(Queue* pq);
//QElemtype QueueBack(Queue* pq);

//InitQueue(��Q)
//������� ������һ���ն���Q��
//DestroyQueue(��Q)
//��ʼ���� ������Q�Ѵ��ڡ�
//������� ������Q�����٣����ٴ��ڡ�
//ClearQueue(��Q)
//��ʼ���� ������Q�Ѵ��ڡ�
//������� ����Q��Ϊ�ն��С�
//QueueEmpty(Q)
//��ʼ���� ������Q�Ѵ��ڡ�
//������� ����QΪ�ն��У��򷵻�true�����򷵻�false��
//QueueLength(Q)
//��ʼ���� ������Q�Ѵ��ڡ�
//������� ������Q��Ԫ�ظ����������еĳ��ȡ�
//GetHead(Q)
//��ʼ���� ��QΪ�ǿն��С�
//������� ������Q�Ķ�ͷԪ�ء�
//EnQueue(��Q, e)
//��ʼ���� ������Q�Ѵ��ڡ�
//������� ������Ԫ��eΪQ���µĶ�βԪ�ء�
//DeQueue(��Q, ��e)
//��ʼ���� ��QΪ�ǿն��С�
//������� ��ɾ��Q�Ķ�ͷԪ�أ�����e������ֵ��
//QueueTraverse(Q)
//��ʼ���� ��Q�Ѵ����ҷǿա�
//������� ���Ӷ�ͷ����β�����ζ�Q��ÿ������Ԫ�ؽ��з��ʡ�




