//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//struct student{
//	char name[10];
//	int chn;
//	int math;
//	int eng;
//	int sum;
//};
//
//int danke(int kemu1, int kemu2) {
//	int D_value = abs(kemu1 - kemu2);
//	if (D_value <= 5) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int zongchengji(int sum1, int sum2) {
//	int D_value = abs(sum1 - sum2);
//	if (D_value <= 10) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	int i, j, k = 0;
//	int n;
//	struct student stu[2000];
//	int sta1, sta2, sta3, sta4;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		scanf("%s %d %d %d", stu[i].name,&stu[i].chn,&stu[i].math,&stu[i].eng);
//		stu[i].sum = stu[i].chn + stu[i].math + stu[i].eng;
//	}
//
//	for (i = 1; i <= n - 1; i++) {
//		for (j = 1 + i; j <= n; j++) {
//			sta1 = danke(stu[i].chn, stu[j].chn);
//			sta2 = danke(stu[i].math, stu[j].math);
//			sta3 = danke(stu[i].eng, stu[j].eng);
//			sta4 = zongchengji(stu[i].sum, stu[j].sum);
//			if (sta1 == 1 && sta2 == 1 && sta3 == 1 && sta4 == 1) {
//				printf("%s %s\n", stu[i].name, stu[j].name);
//			}
//		}
//	}
//
//	return 0;
//}
