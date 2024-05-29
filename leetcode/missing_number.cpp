// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]
    
    
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;

        int n = nums.size();
        for(int i=0;i<n;i++){
            int tmp = nums[i];
            tmp = (tmp>0)? tmp: -tmp;
            if(nums[tmp-1]>0){
                nums[tmp-1] = -nums[tmp-1]; 
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }
    return res;

    }