//week03-3a.cpp �Ĥ@�ؤ�k�⤣�O0����X��
//283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } //�⤣�O0���ƼȮɩ�bans�A����A��^�h
        //�A��for��^�h
        for(int i=0; i<nums.size(); i++){

        if(i<ans.size()) nums[i] = ans[i];
        else nums[i] = 0;
        }
    }
};
