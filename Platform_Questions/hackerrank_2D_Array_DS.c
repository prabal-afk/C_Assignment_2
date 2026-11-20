int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int best = 0, first = 1;

    for (int i = 0; i + 2 < arr_rows; i++) {
        for (int j = 0; j + 2 < arr_columns; j++) {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                    + arr[i + 1][j + 1]
                    + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (first || sum > best) {
                best = sum;
                first = 0;
            }
        }
    }
    return best;
}
