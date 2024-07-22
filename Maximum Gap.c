int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maximumGap(int* nums, int numsSize) {
    if (numsSize < 2) {
        return 0;
    }
    
    qsort(nums, numsSize, sizeof(int), compare);
    
    int maxGap = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] - nums[i - 1] > maxGap) {
            maxGap = nums[i] - nums[i - 1];
        }
    }
    
    return maxGap;
}
