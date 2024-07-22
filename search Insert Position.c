int searchInsert(int* nums, int numsSize, int target) {
    int start = 0, end = numsSize - 1;

    while (start <= end){
        int middle = (start+end) / 2;
        if (nums[middle] == target){
            return middle;
        } else if (nums[middle] <= target){
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return start;
}
