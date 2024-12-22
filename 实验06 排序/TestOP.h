#pragma once
// TestOP的目的是为了测试每个排序的时间
#include "sort.h"
#include<iostream>
//#include"TestOP.h"
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <malloc.h>


void TestOP();
//20个基本有序的数据
void TestOrder();
//20个逆序的数据
void TestReOrder();
// 这个函数是用来复制我的线性结构到链式结构的，参数1表示数组的起始地址，参数二表示数组要求的大小
SListNode* ArrayToLinkedList(const int* arr, int size);
// 这个函数是用来释放我的链表的，防止内存泄漏
void FreeLinkedList(SListNode* head);