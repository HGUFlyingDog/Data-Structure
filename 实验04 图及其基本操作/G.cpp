#include "G.h"

void CreateUDG(ALGraph& G)
{
    int i, j, k;
    ArcNode* p;
    cout << "请输入顶点数和边数" << endl;
    cin >> G.vexnum >> G.arcnum;
    cout << "请输入顶点信息" << endl;
    for (i = 0; i < G.vexnum; i++)
    {
        cin >> G.vertices[i].data;
		G.vertices[i].firstarc = nullptr; // 初始化
    }
    cout << "请输入边的信息" << endl;
    for (k = 0; k < G.arcnum; k++)
    {
        cout << "请输入边(vi,vj)的顶点序号" << endl;
        cin >> i >> j;
        p = new ArcNode;
        p->adjvex = j;
        p->nextarc = G.vertices[i].firstarc;
        G.vertices[i].firstarc = p;
        p = new ArcNode;
        p->adjvex = i;
        p->nextarc = G.vertices[j].firstarc;
        G.vertices[j].firstarc = p;
    }
}

void Display(ALGraph& G)
{
    int i;
    ArcNode* p;
    for (i = 0; i < G.vexnum; i++)
    {
        cout << G.vertices[i].data;
        p = G.vertices[i].firstarc;
        while (p != nullptr)
        {
            cout << "→" << G.vertices[p->adjvex].data;
            p = p->nextarc;
        }
        cout << endl;
    }
}
