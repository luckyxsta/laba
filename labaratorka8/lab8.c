#include <stdio.h>
#define MAX_SIZE 3

float determinant2x2(float matrix[2][2]){
    return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
}

float determinant3x3(float matrix[3][3]){
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]); 
}

int main(){
    int N;
    float matrix[MAX_SIZE][MAX_SIZE];
    float det;

    printf("Введите размер матрицы (1-3): ");
    scanf("%d", &N);
    if (N < 1 || N > 3){
        printf("ERROR N NOT IN 1-3");
        return 1;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Введите элемент матрицы %d%d : ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    if (N == 1){
        det = matrix[0][0];
    }else if (N == 2){
        det = determinant2x2((float (*)[2])matrix);
    }else{
        det = determinant3x3((float (*)[3])matrix);
    }

    printf("Ваша матрица:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%.2f  ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Определитель: %.2f\n", det);

    return 0;
}