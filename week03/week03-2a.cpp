//week03-2a.cpp
//1822.Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //ヴ计0常穦跑Θ0┮璶1
        for(int i=0; i<nums.size(); i++){ //Τ碭计癹伴禲碭Ω
            ans *= nums[i]; //–Ωрa[i]秈ans柑
        } //计禫禫穦脄
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
