//week06-4.cpp
//�ǲ߭p�eSimulation�����Ĥ@�D 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0; //�@�}�l�b���IO Origin
        for(char c : moves){ //C++���i���j��
            if(c=='U'){ //�W
                y++;
            }else if(c=='D'){ //�U
                y--;
            }else if(c=='L'){ //��
                x--;
            }else if(c=='R'){ //�k
                x++;
            }
        } //�̫��٦��d�b���I(0,0)��?
        if(x==0 && y==0) return true;
        else return false;
    }
};
