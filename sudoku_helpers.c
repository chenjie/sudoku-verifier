#include <stdio.h>

/* Each of the n elements of array elements, is the address of an
 * array of n integers.
 * Return 0 if every integer is between 1 and n^2 and all
 * n^2 integers are unique, otherwise return 1.
 */
int check_group(int **elements, int n) {
    int set[1024] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = elements[i][j];
            if (set[num - 1] != 0 || (num < 1 || num > n*n)) {
                return 1;
            }
            set[num - 1] = 1;
        }
    }
    return 0;
}

/* puzzle is a 9x9 sudoku, represented as a 1D array of 9 pointers
 * each of which points to a 1D array of 9 integers.
 * Return 0 if puzzle is a valid sudoku and 1 otherwise. You must
 * only use check_group to determine this by calling it on
 * each row, each column and each of the 9 inner 3x3 squares
 */
int check_regular_sudoku(int **puzzle) {
    // Check rows
    for (int i = 0; i < 9; i++) {
        int *row_elements[3] = {(*(puzzle+i)), (*(puzzle+i))+3, (*(puzzle+i))+6};
        int rtn = check_group(row_elements, 3);
        if (rtn == 1) {
            fprintf(stderr, "ROW #%d is invalid.\n", i);
            return 1;
        }
    }

    // Check columns
    for (int i = 0; i < 9; i++) {
        int first_group[3] = {puzzle[0][i], puzzle[1][i], puzzle[2][i]};
        int second_group[3] = {puzzle[3][i], puzzle[4][i], puzzle[5][i]};
        int third_group[3] = {puzzle[6][i], puzzle[7][i], puzzle[8][i]};
        int *col_elements[3] = {first_group, second_group, third_group};
        int rtn = check_group(col_elements, 3);
        if (rtn == 1) {
            fprintf(stderr, "Invalid COLUMN. [%d]\n", i);
            return 1;
        }
    }

    // Check inner boxes
    for (int i = 0; i <= 6; i += 3) {
        for (int j = 0; j <= 6; j += 3) {
            int *box_elements[3] = {(*(puzzle+i))+j, (*(puzzle+i+1))+j, (*(puzzle+i+2))+j};
            int rtn = check_group(box_elements, 3);
            if (rtn == 1) {
                fprintf(stderr, "Invalid BOX. [%d, %d]\n", i, j);
                return 1;
            }
        }
    }

    return 0;
}
