//week07-4.cpp
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions; //��4��
        cout<<instructions; //Debug
        int x = 0,y = 0; //x�y�� y�y��
        int d = 0; //d: ��Vdirectioon 0:�_ 1:�F 2:�n 3:��
        //�k��d=(d+1) %4 ��4���l��
        //����d=(d-1+4) %4 = (d+3) %4 �i�H�˹L��
        int dx[4] = {0,1,0,-1}; //�e�i�@��ɷ|�� x+=dx[d] �� y+=dx[d]
        int dy[4] = {1,0,-1,0}; //�o���O�a��2D������� �M�w�e�i�h��
        for(char C:instructions){ //�̦r�����O �@���@�ʧ@
            if(C=='G'){ //�e�i�@�� �t�Xdx[d] dy[d] �e�i
                x+=dx[d];
                y+=dy[d];
            } else if(C=='R'){ //�k��
                d=(d+1)%4;
            }else if(C=='L'){ //����
                d=(d+3)%4;
            }
        } //���}�j��ɷ|�@���� ���ɭԨ����^�� ���ɭԷ|�^��
        //cout<<'x'<<'y'<<y<<endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
