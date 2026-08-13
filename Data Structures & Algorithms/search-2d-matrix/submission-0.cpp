class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m =matrix[0].size();
        int low_r=0;
        int low_c=0;
        int high_r=n-1;
        int high_c=m-1;
        int mid_r=low_r+(high_r-low_r)/2;
        int mid_c=low_c+(high_c-low_c)/2;
        while(low_c<=high_c && low_r<=high_r){
            int mid_r=low_r+(high_r-low_r)/2;
        int mid_c=low_c+(high_c-low_c)/2;
            if(target<matrix[mid_r][mid_c]){
                high_c=mid_c -1 ;
                high_r = mid_r -1;

            }else if (target>matrix[mid_r][mid_c]){
                low_c=mid_c + 1;
                low_r = mid_r +1;
            }else{
                return true;
                break;
            }
        }
        
        return false;
    }
};
