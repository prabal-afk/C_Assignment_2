int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int* result = (int*)malloc(a_count * sizeof(int));

    for (int i = 0; i < a_count; i++)
        result[i] = a[a_count - 1 - i];

    return result;
}
