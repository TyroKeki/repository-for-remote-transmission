//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define min(a, b) ((a) < (b) ? (a) : (b))
//#define max(a, b) ((a) > (b) ? (a) : (b))
//
//int main() {
//	int i, j, k;
//	char str1[105];
//	char str2[105];
//	scanf("%s", str1);
//	scanf("%s", str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	//¼ÆËã
//	int ct1 = 0, ct2 = 0;
//	//Ê×ÅÐ¶Ï
//	for (i = 0; i < len1; i++) {
//		if (str1[i] != str2[i]) {
//			break;
//		}
//		ct1++;
//	}
//	
//	int a = len1, b = len2;
//	int minval = min(a, b);
//	int maxval = max(a, b);
//	for (i = 1; i <= len1; i++) {
//		if ((len1-i<0)||(len2-i<0)||str1[len1 - i] != str2[len2 - i]) {
//			break;
//		}
//		ct2++;
//	}
//
//	printf("%d %d\n", ct1, ct2);
//	return 0;
//}