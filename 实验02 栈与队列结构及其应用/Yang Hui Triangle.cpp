//7.	用队列实现计算和输出杨辉三角的前n行。
#include"Queue.h"

Status PrintYangHuiTriangle(int n) {
    if (n <= 0) return;

    Queue Q;
    InitQueue(Q);

    EnQueue(Q, 1); // 第一层，只有一个1

    for (int i = 1; i <= n; ++i) {
        int prev = 0; // 用于存储上一层的元素
        for (int j = 0; j < i; ++j) {
            int curr;
            DeQueue(Q, curr);   // 取出当前元素
            cout << curr << " "; // 打印当前元素
            int next = prev + curr; // 当前元素与前一个元素的和作为下一层的值
            EnQueue(Q, next); // 将下一层的值入队
            prev = curr;      // 更新prev为当前值
        }
        EnQueue(Q, 1); // 每层最后一个值都是1
        cout << endl;  // 换行
    }
    return OK;
}
