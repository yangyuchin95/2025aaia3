//week04-3.cpp
//66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); //�}�C�j�p
        for (int i=N-1; i>=0; i--){ //�˹L�Ӫ��j��
            if(digits[i]==9){ //�n�i��
                digits[i]=0; //�]��0�~�򰵤�����
            }else{
                digits[i]++;
                return digits; //��������}�C����return
            }
        }
        digits.insert(digits.begin(),1); //�̥���n���J1
        return digits;
    }
};
