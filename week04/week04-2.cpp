//week04-2.cpp
//896. Monotonic Array
//�}�C�u���W�[�δ�� ���i�H�S�W�S��
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;
        for(int i=1; i<nums.size(); i++){ //�ǭǤ��
            if(nums[i-1] < nums[i]) up=1;//�W�[
            if(nums[i-1] > nums[i]) down=1;//���
        }
        if(up==1 && down==1) return false; //���i�S�W�S��
        return true;
    }
};
