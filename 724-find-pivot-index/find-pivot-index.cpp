class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left =0, sum=0, right=0;

        for(int i=0; i<nums.size(); i++){
            sum = sum+ nums[i];

        }
    


        for(int i=0; i<nums.size(); i++){
            

            right = sum - left - nums[i];

            if(right == left){
                return i;
            }
             left = left+ nums[i];
        }
        return -1;
    } 
};