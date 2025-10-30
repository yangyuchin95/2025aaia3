//week08-2.cpp
//73. Set Matrix Zeroes �]�w�@��0
//����@��Ū�A�@��]�w0�C�n�ⶥ�q ��Ū���A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //�Ĥ@���q ��Ū�� �O�U������0������i�Mj
        int M =matrix.size(),N=matrix[0].size(); //����M �k��N
        vector<int>markI(M,0), markJ(N,0); //�ŧiC++���}�C ���פ��OM�AN�A�̭����]0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0) { //�n�O�U����i j
                    markI[i]=1; //�аO�@�Ui���o���� ���@�U���n�M��0
                    markJ[j]=1; //�аO�@�Uj���o�㪽�� ���@�U���n�M��0
                }
            }
        }
        //�ĤG���q�A�A�ӵ�markI�MmarkJ���аO �������M��0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            } //�p���аO �A�⥦���������ܦ�0
        }
    }
};
