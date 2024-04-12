#include <stdio.h>
#include <string.h>

int scan_matrix(int row, int matrix[row][row], int error) {
  for (int i = 0; i < row && !error; i++) {
    for (int j = 0; j < row && !error; j++) {
      if (scanf("%d", &matrix[i][j]) != 1) {
        error = 1;
      }
    }
  }
  return error;
}

int main(void) {
  int row, error = 0;
  if (scanf("%d", &row) == 1) {
    int matrix1[row][row];
    error = scan_matrix(row, matrix1, error);
    int matrix2[row][row];
    error = scan_matrix(row, matrix2, error);
    int matrix_res[row][row];
    for (int i = 0; i < row && !error; i++) {
      for (int j = 0; j < row; j++) {
        matrix_res[i][j] = 0;
        for (int k = 0; k < row; k++)
          matrix_res[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
    if (!error) {
      for (int i = 0; i < row; i++) {
        if (i) {
          printf("\n");
        }
        for (int j = 0; j < row; j++) {
          printf("%d", matrix_res[i][j]);
          if (j < row - 1) {
            printf(" ");
          }
        }
      }
    }
  } else {
    error = 1;
  }
  if (error) {
    printf("n/a");
  }
}