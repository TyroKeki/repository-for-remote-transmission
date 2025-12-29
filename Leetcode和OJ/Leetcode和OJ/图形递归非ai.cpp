//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//void CreateShape(int n, int x, int y, char matrix[][1000]) {
//	if (n == 1) {
//		matrix[x][y] = 'X';
//		return;
//	}
//	//空隙尺寸
//	int unit = pow(3, n - 2);
//
//	// 在5个位置递归创建子分形
//	CreateShape(n - 1, x, y, matrix);                    // 左上角
//	CreateShape(n - 1, x, y + 2 * unit, matrix);         // 右上角
//	CreateShape(n - 1, x + unit, y + unit, matrix);      // 中心
//	CreateShape(n - 1, x + 2 * unit, y, matrix);         // 左下角
//	CreateShape(n - 1, x + 2 * unit, y + 2 * unit, matrix); // 右下角
//}
//
//
//int main() {
//	char matrix[1000][1000];
//	int i, j, k;
//	int x, y;
//	int n;
//
//	scanf("%d", &n);
//	int stop;
//	stop = pow(3, n - 1);
//
//	//清空矩阵
//	for (x = 0; x < stop; x++) {
//		for (y = 0; y < stop; y++) {
//			matrix[x][y] = ' ';
//		}
//	}
//
//	//处理过程
//	CreateShape(n, 0, 0, matrix);
//
//	//输出结果
//	for (x = 0; x < stop; x++) {
//		for (y = 0; y < stop; y++) {
//			printf("%c", matrix[x][y]);
//		}
//		printf("\n");
//	}
//}

