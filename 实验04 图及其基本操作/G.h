#pragma once
#include<iostream>
#define MVNum 100
using namespace std;

//��󶥵��� 

typedef char VerTexType; // ���� VerTexType ����

typedef struct ArcNode   //�߽ڵ�
{
	int adjvex; //�ñ���ָ��Ķ����λ�� 
	struct ArcNode* nextarc; //ָ����һ���ߵ�ָ�� 

}ArcNode;
typedef struct VNode    //������Ϣ
{
	VerTexType data;
	ArcNode* firstarc;  //ָ���һ�������ö���ıߵ�ָ�� 
}VNode, AdjList[MVNum];   //AdjList��ʾ�ڽӱ����� 
typedef struct     //�ڽӱ�
{
	AdjList vertices;
	int vexnum, arcnum;  //ͼ�ĵ�ǰ�������ͱ��� 
}ALGraph;


void CreateUDG(ALGraph& G);  //��������ͼ
void Display(ALGraph &G);//��ʾ�ڽӱ�
