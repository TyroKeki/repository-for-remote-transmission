#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////二进制输出
//int binary(int store[], int n,int pos) {
//	int i = 0;
//	if (pos == n) {
//		for (i = 0; i < n; i++)
//			printf("%d", store[i]);
//		printf(" ");
//		return 0;
//	}
//	
//	//当前位置放1
//	store[pos] = 1;
//	binary(store, n, pos + 1);
//
//	//当前位置放0
//	store[pos] = 0;
//	binary(store, n, pos + 1);
//
//}
//
//int main() {
//	int storage[10000];
//	binary(storage, 3, 0);
//	return 0;
//}


