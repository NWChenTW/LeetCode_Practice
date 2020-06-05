struct TreeNode* convert(int *nums, int start, int end){
    if(start>end)
        return NULL;
    else{
        int mid = (start+end)/2;
        struct TreeNode *node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
        node -> val = nums[mid];
        node -> left = convert(nums, start, mid-1);
        node -> right = convert(nums, mid+1, end);
        return node;
    }
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return convert(nums, 0, numsSize-1);    
}