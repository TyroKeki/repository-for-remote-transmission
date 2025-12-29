#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main() {
//	//输入密码明文
//	int i, j, k;
//	char temp1;
//	char password[20005];
//	char str[100005];
//	scanf("%s", password);
//
//	//加密
//	int n = strlen(password);
//	for (i = 0; i < n; i++) {
//		temp1 = password[i] - '0';
//
//		if (temp1 <= 4) {
//			for (j = 0; j <= temp1; j++) {
//				str[i * 5 + j] = '.';
//			}
//			j--;
//			for (k = 1; k <= 4 - j; k++) {
//				str[i * 5 + j + k] = '-';
//			}
//			j = 0, k = 0;
//		}
//
//		if (temp1 >= 5) {
//			for (j = 0; j <= temp1 - 5; j++) {
//				str[i * 5 + j] = '-';
//			}
//			j--;
//			for (k = 1; k <= 4 - j; k++) {
//				str[i * 5 + j + k] = '.';
//			}
//			j = 0, k = 0;
//		}
//
//	}
//
//	//输出
//	for (i = 0; i < n * 5; i++) {
//		printf("%c", str[i]);
//	}
//		return 0;
//}


//翻译密文
//int main() {
//	int i, j, k;
//	char flag = 0;
//	int count = 0;
//	//输入字符串
//	char str[100005];
//	char password[20005];
//	scanf("%s", str);
//	//printf("%s", str);
//
//	//处理字符串
//	int n = strlen(str);
//	for (i = 0; i < n / 5; i++) {
//		for (j = i * 5; j < (i + 1) * 5; j++) {
//			if (str[j] == '.' && flag == 0) {
//				flag = '.';
//				count = -1;
//			}
//			if (str[j] == '-' && flag == 0) {
//				flag = '-';
//				count = 4;
//			}
//
//			if (flag == '.'&& str[j]=='.') {
//				count++;
//			}
//			if (flag == '-' && str[j] == '-') {
//				count++;
//			}
//		}
//		//printf("%d", count);
//		password[(j - 4) / 5] = '0' + count;
//		count = 0;
//		flag = 0;
//	}
//
//	//输出
//	for (i = 0; i < n / 5; i++) {
//		printf("%c", password[i]);
//	}
//}

//解密