#pragma once

typedef struct PolynomialTerm 
{
    int coef;                // ϵ��
    int exp;                 // ָ��
    struct PolynomialTerm* next;   // ָ����һ���ڵ�
} PT ,*PPT;

// ����һ������ʽ
void CreatePolynomial(PPT&node);