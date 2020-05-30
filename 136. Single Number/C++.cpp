class Solution{
public:
    int singleNumber(vector<int>& nums){
        
        int x = nums[0];
        if(nums.size()>1){
            for(int i=1; i<nums.size(); i++){
                x = x^nums[i];
            }
        }
    return x;
    }
};

/*This is property of xor that if u xor a number with other number two times then it gives the same number .
e.g 4 xor 2 =6 and then 6 xor 2 = 4 so the same number itself .
So this property has been used here.When we traverse the the array the elements which apperrs autuomaticily will be removed and the element which left is apperared single in array.