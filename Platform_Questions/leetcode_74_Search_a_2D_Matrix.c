#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int cols = matrixColSize[0];
    int lo = 0, hi = matrixSize * cols - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int value = matrix[mid / cols][mid % cols];
        if (value == target)
            return true;
        if (value < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return false;
}
