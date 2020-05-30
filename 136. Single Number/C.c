int singleNumber(int* nums, int numsSize){
    int x = nums[0];
    for (int i=1; i<numsSize; i++){
        x = x^nums[i];
    }
    return x;
}