// 7.2
// Од стандарден влез се вчитува матрица сo m редици и n колони. Прво се вчитуваат броевите m и n а потоа и елементите на матрицата.
// Да се изврши min-max нормализација на секоја колона од матрицата, односно секој елемент во секоја колона да се замени со вредноста
// (x−min) / (max−min) каде што x е елемент во некоја колона, а max и min се соодветно најголемиот и најмалиот елемент во соодветната колона.
// Трансформираната матрица да се испечати на екран.

#include <stdio.h>

int main() {
    int n, m, broj;
    scanf("%d %d", &m, &n);

    int a[100][100];
    double r[100][100];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        int najmal = a[0][i], najgolem = a[0][i];
        for(int j = 0; j < m; j++) {
            if(a[j][i] < najmal) { najmal = a[j][i]; }
            if(a[j][i] > najgolem) { najgolem = a[j][i]; }
        }

        for(int j = 0; j < m; j++) {
            r[j][i] = (a[j][i] - najmal) / (double)(najgolem - najmal);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2lf ", r[i][j]);
        }
        printf("\n");
    }


    return 0;
}
