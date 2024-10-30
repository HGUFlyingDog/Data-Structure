#pragma once

typedef struct PolynomialTerm 
{
    int coef;                // ϵ��
    int exp;                 // ָ��
    struct PolynomialTerm* next;   // ָ����һ���ڵ�
} PT ,*PPT;

// ����һ������ʽ
void CreatePolynomial(PPT&node);
// ����ʽ��Ĳ���
void TermInsert(PPT&node ,int coef,int exp);
// ����ʽ�Ĵ�ӡ
void PTPrint(const PPT node);