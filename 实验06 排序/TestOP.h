#pragma once
// TestOP��Ŀ����Ϊ�˲���ÿ�������ʱ��
#include "sort.h"
#include<iostream>
//#include"TestOP.h"
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <malloc.h>


void TestOP();
//20���������������
void TestOrder();
//20�����������
void TestReOrder();
// ������������������ҵ����Խṹ����ʽ�ṹ�ģ�����1��ʾ�������ʼ��ַ����������ʾ����Ҫ��Ĵ�С
SListNode* ArrayToLinkedList(const int* arr, int size);
// ��������������ͷ��ҵ�����ģ���ֹ�ڴ�й©
void FreeLinkedList(SListNode* head);