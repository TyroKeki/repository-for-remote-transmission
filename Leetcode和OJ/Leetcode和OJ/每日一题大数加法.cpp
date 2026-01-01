//31ms 10MB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i, j, k;
	int carry = 0;
	int* p = (int*)malloc(sizeof(int) * (digitsSize + 1));
	digits[digitsSize - 1] += 1;
	for (i = digitsSize - 1; i >= 0; i--) {
		digits[i] += carry;
		carry = digits[i] / 10;
		digits[i] -= carry * 10;
	}
	if (carry > 0) {
		*returnSize = digitsSize + 1; //原长度加进位长度
		p[0] = 1;
		for (i = 0; i < digitsSize; i++) {
			p[i + 1] = digits[i];
		}
	}
	else {
		*returnSize = digitsSize; //原长度
		for (i = 0; i < digitsSize; i++) {
			p[i] = digits[i];
		}
	}
	return p;
}

//int main() {
//	int digits[101] = { 1,0,1 };
//	int digitsSize = 3;
//	int returnSize;
//	int* p = plusOne(digits, digitsSize, &returnSize);
//	for(int i=0;i<returnSize;i++){
//		printf("%d", p[i]);
//	}
//}