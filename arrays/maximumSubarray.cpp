class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentSum=max(nums[i],currentSum+nums[i]);
            maxSum=max(maxSum,currentSum);
        }
        return maxSum;
    }
};

// Maximum Subarray

// ## Problem
// Given an integer array nums, find the contiguous subarray
// with the largest sum and return its sum.

// ## Approach (Kadane's Algorithm)
// - Initialize currentSum and maxSum with the first element.
// - Traverse the array from left to right.
// - At each element:
//     - Either start a new subarray from the current element.
//     - Or extend the previous subarray.
// - Update the maximum sum found so far.
// - Return the maximum subarray sum.

// ## Dry Run
// nums = [-2,1,-3,4,-1,2,1,-5,4]
//
// Index  Num  currentSum  maxSum
// 0      -2      -2        -2
// 1       1       1         1
// 2      -3      -2         1
// 3       4       4         4
// 4      -1       3         4
// 5       2       5         5
// 6       1       6         6
// 7      -5       1         6
// 8       4       5         6
//
// Answer = 6

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(1)