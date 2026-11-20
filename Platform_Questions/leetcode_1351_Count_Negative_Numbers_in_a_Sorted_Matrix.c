int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int cols = gridColSize[0];
    int col = cols - 1, count = 0;

    /* the boundary between non-negative and negative only moves left as we go down */
    for (int row = 0; row < gridSize; row++) {
        while (col >= 0 && grid[row][col] < 0)
            col--;
        count += cols - 1 - col;
    }
    return count;
}
