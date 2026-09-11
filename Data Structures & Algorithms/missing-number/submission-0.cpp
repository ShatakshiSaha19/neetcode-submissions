class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans ;
        int op;
        int n =nums.size();
        for(int i=0;i<n;i++){
            op=0;
            int curr=op^nums[i];
            if(curr==1){
                return op;
            }else{
                op++;
            }

        }
        return op;
    }
};
