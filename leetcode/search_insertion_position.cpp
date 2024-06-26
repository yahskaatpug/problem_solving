// # Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// # You must write an algorithm with O(log n) runtime complexity.

 

// # Example 1:

// # Input: nums = [1,3,5,6], target = 5
// # Output: 2
// # Example 2:

// # Input: nums = [1,3,5,6], target = 2
// # Output: 1
// # Example 3:

// # Input: nums = [1,3,5,6], target = 7
// # Output: 4

int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int result;

        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;

            if(l == r) {
                if(target>nums[l]){
                    result = l+1; 
                    break;
                }
                else if(target<nums[l]){
                    result = l;
                    break;
                }
            }

            if(target < nums[mid]) r = mid-1;
            else if(target > nums[mid]) l = mid+1;
        }

         return result;
    }