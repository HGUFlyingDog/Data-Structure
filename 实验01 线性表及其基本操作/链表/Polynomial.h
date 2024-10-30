#pragma once

typedef struct PolynomialTerm 
{
    int coef;                // 系数
    int exp;                 // 指数
    struct PolynomialTerm* next;   // 指向下一个节点
} PT ,*PPT;

// 创建一个多项式
void CreatePolynomial(PPT&node);
// 多项式项的插入
void TermInsert(PPT&node ,int coef,int exp);
// 多项式的打印
void PTPrint(const PPT node);