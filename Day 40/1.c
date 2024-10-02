#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int d = 0; d < rows + cols - 1; d++) {
        for (int i = 0; i < rows; i++) {
            int j = d - i;
            if (j >= 0 && j < cols)
                printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}
