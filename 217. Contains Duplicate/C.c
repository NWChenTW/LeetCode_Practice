int cmp(const void *a, const void *b){
    return *(const int *)a - *(const int *)b;
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    for (; numsSize>1 && nums[0] != nums[1]; numsSize--, nums++);
    return numsSize > 1;
}