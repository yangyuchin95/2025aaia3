///week04-1.cpp �����D ���D�ؼg
///3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; //�@�}�l�ܪ�
        while(numBottles >= numExchange){ //�p�G�~�l��>=�I����N�I��
            numBottles = numBottles-numExchange +1; //�I��1�~����
            ans++; //�h�ܤ@�~
            numExchange++; //�I�����з�[�h�@�~]
        }
        return ans;
    }
};
