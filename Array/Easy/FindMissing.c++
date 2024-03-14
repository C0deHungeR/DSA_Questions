class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int asum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            asum += nums[i];
        } 
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int ans = sum - asum ;
        return ans ;

        
    }
};