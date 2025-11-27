//week12-2.cpp
//976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());//排序(有效率)
        //先練習倒過來的迴圈 把大到小印出來
        //for(int i=nums.size()-1; i>=0; i--){
            //cout<<nums[i] <<" ";
        //} 大到小印出來 正確
        for(int i=nums.size()-1; i>=2; i--){
            //取出nums[i] vs. nums[i-1] nums[i-2]
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i] + nums[i-1]+nums[i-2];
            }//找到最大合法三角形 三邊連起來
        }
        return 0; //找不到答案,return 0
    }
};
