//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//
//int sushu(int n, int* arr) {
//	int i, j, k = 0;
//	int num1, num2;
//	int stop, flag = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num1);
//		stop = sqrt(num1);
//		for (j = 2; j <= stop; j++) {
//			if (num1 % j == 0) {
//				flag = 1;
//				break;
//			}
//		}
//	
//	if (flag == 0) {
//		arr[k] = num1;
//		k++;
//	}
//	flag = 0;
//	}
//	return k - 1;
//}
//
//int juedui(int k, int* arr, int* arr2) {
//	int i, j, kk = 0;
//	int stop;
//	for (i = 0; i <= k; i++) {
//		int flag = 0;
//		int num1 = 0;
//		while (arr[i] != 0) {
//			num1 *= 10;
//			num1 += arr[i] % 10;
//			arr[i] /= 10;
//		}
//		stop = sqrt(num1);
//		for(j = 2; j <= stop; j++) {
//			if (num1 % j == 0) {
//				flag = 1;
//			}
//		}
//		if (flag == 0) {
//			arr2[kk] = num1;
//			kk++;
//		}
//		
//	}
//	return kk-1;
//}
//
//void fanzhuan(int count, int* arr) {
//	for (int i=0; i <= count; i++) {
//		int num1 = 0;
//		while (arr[i] != 0) {
//			num1 *= 10;
//			num1 += arr[i] % 10;
//			arr[i] /= 10;
//		}
//		arr[i] = num1;
//	}
//}
//
//int main() {
//	int nums[1005];
//	int nums2[1005];
//	int n;
//	int i, j, k;
//	int total;
//	int t;
//	int new_total;
//	scanf("%d", &n);
//	total = sushu(n, nums);
//
//	//for (i = 0; i <= total; i++) {
//	//	printf("%d\n", nums[i]);
//	//}
//	//printf("%d", total);
//
//	new_total = juedui(total, nums, nums2);
//	fanzhuan(new_total, nums2);
//
//	//for (i = 0; i <= new_total; i++) {
//	//	printf("%d\n", nums2[i]);
//	//}
//	//printf("%d", new_total);
//
//	t = new_total;
//	//Ã°ÅÝÅÅÐò
//	for (i = 0; i <= t - 1; i++) {
//		for (j = 0; j <= t - i - 1; j++) {
//			if (nums2[j] > nums2[j + 1]) {
//				int temp = nums2[j];
//				nums2[j] = nums2[j + 1];
//				nums2[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i <= t; i++) {
//		printf("%d\n", nums2[i]);
//	}
//	return 0;
//}


/*
5
19
11
17
13
41
*/