#ifndef _BINARY_SEARCH_H_
#define _BINARY_SEARCH_H_

int binarySearch(int target, int *array, int start, int end) {

    if (start == end) {
        if (target == array[start]) {
            return start;
        } else {
            return -1;
        }
    }

    int32_t mid = (start + end) / 2;
    if (target == array[mid]) {
        return mid;
    } else if (target < array[mid]) {
        return binarySearch(target, array, start, mid);
    } else {
        return binarySearch(target, array, mid + 1, end);
    }
}

int binarySearchWhile(int target, int *array, int start, int end) {

    while (start <= end) {
        int32_t mid = (start + end) / 2;
        if (target == array[mid]) {
            return mid;
        } else if (target < array[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

#endif
