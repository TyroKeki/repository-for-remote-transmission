#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main() {
//	int n, m;
//	char chars[105][2005];
//	int i, j, k;
//	int op1, op2;
//	char* pointers[105];
//	char* temp_pointer;
//	scanf("%d %d", &n, &m);
//
//	for (i = 1; i <= n; i++) {
//		scanf("%s", chars[i]);
//	}
//
//	//记录->字符串的指针
//	for (i = 1; i <= n; i++) {
//		pointers[i] = chars[i];
//	}
//	
//	//操作过程
//	for (i = 1; i <= m; i++) {
//		scanf("%d %d", &op1,&op2);
//		temp_pointer = pointers[op1];
//		pointers[op1] = pointers[op2];
//		pointers[op2] = temp_pointer;
//	}
//
//	//指针转换成字符串
//	for (i = 1; i <= n; i++) {
//		printf("%s\n", pointers[i]);
//	}
//}