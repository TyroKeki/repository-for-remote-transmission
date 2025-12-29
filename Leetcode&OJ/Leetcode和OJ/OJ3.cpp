//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//struct rec
//{
//	int e1, e2, e3, e4;
//	int area;
//}input[1000], output[1000];
//int fun(struct rec a[], struct rec b[], int n)
//{
//	/*****************开始***********************/
//	int p1=0;
//	for(int i=0;i<n;i++){
//		//a[].e1为长 a[].e2为高
//		if (a[i].e1 == a[i].e2) {
//			b[p1].e1 = a[i].e1;
//			b[p1].e2 = a[i].e2;
//			p1++;
//		}
//	}
//	
//	int area1[1000];
//	for (int i = 0; i < p1; i++) {
//		area1[i] = b[i].e1 * b[i].e2;
//	}
//
//	//冒泡排序
//	for (int i = 0; i < p1 -1; i++) {
//		for (int j = 0; j < p1 - i - 1; j++) {
//			if (area1[j]>area1[j+1]) {
//				int temp = area1[j];
//				area1[j] = area1[j + 1];
//				area1[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < p1; i++) {
//		b[i].area = area1[i];
//	}
//
//	return p1;
//	/*****************结束**********************/
//}
//int main()
//{
//	int N, i, num;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//		scanf("%d%d%d%d", &input[i].e1,
//			&input[i].e2, &input[i].e3,
//			&input[i].e4);
//	num = fun(input, output, N);
//	for (i = 0; i < num; i++)
//		printf("%d\n", output[i].area);
//	return 0;
//}
//
///*
//5
//90 90 90 90
//100 102 100 102
//60 60 60 60
//25 29 25 29
//30 30 30 30
//*/