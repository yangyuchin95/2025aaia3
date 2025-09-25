//week03-3a.cpp 第一種方法把不是0的找出來
//283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } //把不是0的數暫時放在ans，之後再塞回去
        //再用for放回去
        for(int i=0; i<nums.size(); i++){

        if(i<ans.size()) nums[i] = ans[i];
        else nums[i] = 0;
        }
    }
};
