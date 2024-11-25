#include "G.h"

void CreateUDG(ALGraph& G)
{
    int i, j, k;
    ArcNode* p;
    cout << "�����붥�����ͱ���" << endl;
    cin >> G.vexnum >> G.arcnum;
    cout << "�����붥����Ϣ" << endl;
    for (i = 0; i < G.vexnum; i++)
    {
        cin >> G.vertices[i].data;
		G.vertices[i].firstarc = nullptr; // ��ʼ��
    }
    cout << "������ߵ���Ϣ" << endl;
    for (k = 0; k < G.arcnum; k++)
    {
        cout << "�������(vi,vj)�Ķ������" << endl;
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
            cout << "��" << G.vertices[p->adjvex].data;
            p = p->nextarc;
        }
        cout << endl;
    }
}
