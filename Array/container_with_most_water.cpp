//Problem :- https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int curr_area = 0;
        int beg = 0;
        int end = height.size()-1;

        while(beg<end){
            curr_area = min(height[beg], height[end])*(end-beg);
            max_area = max(max_area, curr_area);
            
            if(height[beg]<=height[end]){
                beg++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }
};

//Time Complexity : O(n)
//Space Complexity : O(1)