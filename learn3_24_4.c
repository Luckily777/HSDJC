//力扣 因式分解

int* fraction(int* cont, int contSize, int* returnSize) {
    if (cont == NULL) {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = 2;
    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
    arr[0] = cont[contSize - 1];
    arr[1] = 1;

    for (int i = contSize - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = cont[i - 1] * arr[0] + arr[1];
        arr[1] = temp;
    }
    return arr;
}