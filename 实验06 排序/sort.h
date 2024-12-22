#pragma once
#include<iostream>
#include<cassert>

// 链式结构，用于插入排序排序
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SListNode;


using namespace std;



//排序部分
//冒泡排序（优化后）
void BubbleSort(int* a, int n);
//冒泡排序（优化前）
void BubbleSort_Bad(int* a, int n);
// 快速排序——霍尔排序
void Qsort(int* a, int begin, int end);
//	选择排序
void SelectSort(int* a, int n);
// 插入排序（链表）
void InsertSort_Link(SListNode*& A);
// 插入排序 （非链表）
void InsertSort(int* a, int n);
// 希尔排序
void ShellSort(int* a, int n);

// 检查排序的结果
void CheckSort();
//交换两个元素
void swap(int& i, int& j);
