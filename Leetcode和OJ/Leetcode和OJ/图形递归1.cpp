//#include <stdio.h>
//#include <math.h>
//
//char grid[100][100]; // 一次性分配足够大的空间
//
//// 递归函数打印分形
//void fractal(int n, int x, int y, int size) {
//    if (n == 1) {
//        grid[x][y] = 'X';
//        return;
//    }
//
//    int unit = size / 3; // 子分形的大小
//
//    // 递归打印5个子分形
//    fractal(n - 1, x, y, unit);                    // 左上角
//    fractal(n - 1, x, y + 2 * unit, unit);         // 右上角
//    fractal(n - 1, x + unit, y + unit, unit);      // 中心
//    fractal(n - 1, x + 2 * unit, y, unit);         // 左下角
//    fractal(n - 1, x + 2 * unit, y + 2 * unit, unit); // 右下角
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    // 计算分形图的大小：3^(n-1)
//    int size = (int)pow(3, n - 1);
//
//    // 初始化网格为空格（用循环代替memset）
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            grid[i][j] = ' ';
//        }
//    }
//
//    // 生成分形图案
//    fractal(n, 0, 0, size);
//
//    // 打印结果
//    for (int i = 0; i < size; i++) {
//        // 找到每行最后一个非空格字符的位置
//        int last_char = size - 1;
//        while (last_char >= 0 && grid[i][last_char] == ' ') {
//            last_char--;
//        }
//
//        // 打印该行（去掉末尾空格）
//        for (int j = 0; j <= last_char; j++) {
//            putchar(grid[i][j]);
//        }
//        putchar('\n');
//    }
//
//    return 0;
//}