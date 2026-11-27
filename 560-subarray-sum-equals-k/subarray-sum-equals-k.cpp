class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum=0, res =0;
     unordered_map<int,int> mp;
     mp[0] = 1;

     for(int i=0; i< nums.size(); i++){
        sum = sum + nums[i];
        int quest = (sum - k);

        int frq = mp[quest];

        res = res + frq;

        mp[sum]++;


     }
     return res;

    }
};