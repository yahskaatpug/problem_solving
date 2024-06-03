// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

void moveZeroes(vector<int>& nums) {

        int n=nums.size();
        int tmp;
        int l=0,r=1;
        while(l<n && r<n){
            if(nums[l] == nums[r] && nums[l]==0){
                r++;
            }
            else if(nums[l] == 0 && nums[r]!=0){
                tmp = nums[l];
                nums[l]=nums[r];
                nums[r] = tmp;
                l++; r++;
            }
            else if(nums[l]!=0 && nums[r] == 0){
                l++;r++;
            }
            else if(nums[l]!=nums[r] && (nums[l]!=0 && nums[r]!=0)){
                l++;r++;
            }
            else{
                l++;r++;
            }
        }
        
    }