#include <stdio.h>
#include <stdlib.h>

/** 温度转换
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* res = (double*)malloc(sizeof(double) * 2);
    res[0] = celsius + 273.15;
    res[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return res;
}
//最小偶倍数
int smallestEvenMultiple(int n) {
    if (n % 2 == 0) {
        return n;
    }
    else {
        return n * 2;
    }
}

// 二叉树数据读取1
/*Definition for a binary tree node.*/
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
bool checkTree(struct TreeNode* root) {
    if (root->left->val + root->right->val == root->val) return true;
    else return false;
}

// 异或练习
int xorOperation(int n, int start) {
    int i, j, k;
    int result;
    result = start + 2 * 0;
    for (i = 1; i < n; i++) {
        result = result ^ (start + 2 * i);
        //printf("%d", nums[i]);
    }
 
    return result;
}


int numIdenticalPairs(int* nums, int numsSize) {
    int count[101];
    int res = 0;
    int i, j, k;
    for (i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    for (i = 1; i <= 100; i++) {
        count[i]--;
        res += (1 + count[i]) * count[i] / 2;
    }
    return res;
}


//int main() {
//    int res = xorOperation(4, 3);
//    printf("%d", res);
//}
