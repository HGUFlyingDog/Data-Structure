#pragma once
#include<iostream>
#define MVNum 100
using namespace std;

//最大顶点数 

typedef char VerTexType; // 定义 VerTexType 类型

typedef struct ArcNode   //边节点
{
	int adjvex; //该边所指向的顶点的位置 
	struct ArcNode* nextarc; //指向下一条边的指针 

}ArcNode;
typedef struct VNode    //顶点信息
{
	VerTexType data;
	ArcNode* firstarc;  //指向第一条依附该顶点的边的指针 
}VNode, AdjList[MVNum];   //AdjList表示邻接表类型 
typedef struct     //邻接表
{
	AdjList vertices;
	int vexnum, arcnum;  //图的当前顶点数和边数 
}ALGraph;


void CreateUDG(ALGraph& G);  //创建无向图
void Display(ALGraph &G);//显示邻接表
