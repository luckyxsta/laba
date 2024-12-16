#include <stdio.h>
#define MAX 100

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n, int k){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < k; j++){
            C[i][j] = 0;
            for (int p = 0; p < n; p++){
                C[i][j] += A[i][p] * B[p][j]; 
            }
        }
    }
}

int getRowWithMaxNegatives(int C[MAX][MAX], int m, int k){
    int maxNegatives = -1, rowIndex = -1;
    for (int i = 0; i < m; i++){
        int negativeCount = 0;
        for (int j = 0; j < k; j++){
            if (C[i][j] < 0){
                negativeCount++;
            }
        }
        if (negativeCount > maxNegatives){
            maxNegatives = negativeCount;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int replace(int C[MAX][MAX], int m, int k){
    for (int i = 0; i < m; i++){
        int negativeCount = 0;
        for (int j = 0; j < k; j++){
            if (C[i][j] < 0){
                negativeCount++;
            }
        }
        for (int j = 0; j < k; j++){
            if (C[i][j] < 0){
                C[i][j] = negativeCount;
            }
        }
    }
}

int reverse(int C[MAX][MAX], int row, int k){
    int start = 0, end = k - 1;
    while (start < end){
        int temp = C[row][start];
        C[row][start] = C[row][end];
        C[row][end] = temp;
        start++;
        end--;
    }
}

int main(){
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m,n,k;

    printf("Введите размер матрицы A(m,n)");
    scanf("%d %d", &m, &n);
    printf("Введите размер матрицы B(n,k)");
    scanf("%d %d", &n, &k);

    printf("Введите матрицу А: \n");
    for (int i = 0; i<m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Введите матрицу B: \n");
    for (int i = 0; i<n; i++){
        for (int j = 0; j < k; j++){
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, C, m, n ,k);

    int rowIndex = getRowWithMaxNegatives(C, m, k);

    if (rowIndex != -1){
        printf("Строка с наибольшим количеством отрицательных элементов: %d\n", rowIndex);
    }

    replace(C, m, k);

    reverse(C, rowIndex, k);

    printf("Матрица С:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < k; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}