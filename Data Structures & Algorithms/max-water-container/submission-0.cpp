class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int res=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int dist= j-i;
            int diff=min(heights[j],heights[i]);
            int area= diff*dist;
            res= max(res,area);
            if(heights[i]<=heights[j]){
            i++;
            }else{ j--;}
        }
        return res;
    }
};
