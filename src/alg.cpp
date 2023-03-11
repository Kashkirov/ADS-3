// Copyright 2021 NNTU-CS
int ApproriateTarget(int* arr, int target, int ID) {
    if (arr[ID] == target) {
        return 1;
    }
    return 0;
}
int cbinsearch(int *arr, int size, int value) {
    int count2 = 0;
    int middleCrossing = size / 2;
    int i = 0;
    if (size % 2 != 0 ) {
        count2 += ApproriateTarget(arr, value, size - 1);
    }
    while (i < middleCrossing) {
        count2 += ApproriateTarget(arr, value, i);
        count2 += ApproriateTarget(arr, value, i + middleCrossing);
        ++i;
    }
    return count2;
}
