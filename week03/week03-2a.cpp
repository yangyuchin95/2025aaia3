//week03-2a.cpp
//1822.Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //����ƭ�0���|�ܦ�0�A�ҥH�n��1
        for(int i=0; i<nums.size(); i++){ //���X�Ӽưj��]�X��
            ans *= nums[i]; //�C����a[i]���ians��
        } //�Ʀr�V���V�j�A�|�z��
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
