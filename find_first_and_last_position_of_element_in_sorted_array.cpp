//Problem :- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int find_first_pos(vector<int> &nums, int target){
        int first_pos = -1;
        int beg = 0;
        int end = nums.size()-1;
        
        while(beg<=end){
            int mid = (beg+end)/2;
            
            if(nums[mid]==target){
                first_pos = mid;
                end = mid-1;
            }
            else if(nums[mid]<target){
                beg = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return first_pos;
    }
    
    int find_last_pos(vector<int> &nums, int target){
        int last_pos = -1;
        int beg = 0;
        int end = nums.size()-1;
        
        while(beg<=end){
            int mid = (beg+end)/2;
            
            if(nums[mid]==target){
                last_pos = mid;
                beg = mid+1;
            }
            else if(nums[mid]<target){
                beg = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return last_pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first_pos = find_first_pos(nums, target);
        
        int last_pos = find_last_pos(nums, target);
        
        vector<int> res = {first_pos, last_pos};
        return res;
        
    }
};

//Time Complexity : O(logn)
//Space Complexity : O(1)