class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1;
        for(int i=0;i<nums.size();i++){
            mul*=nums[i];
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(mul!=0){
                res.push_back(mul/nums[i]);
            }
        }
        return res;

    }
};
