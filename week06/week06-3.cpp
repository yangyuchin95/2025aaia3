//week06-3.cpp
//�ǲ߭p�eSimulation�����Ĥ@�D 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
                vector<int> a;
                for(string op : operations){ //C++�i���j��
                    //cout << op << "\n"; //���ոլݷ|�L�X�ƻ�
                    if(op[0]=='+'){ //����Ƭۥ[�A��^�h
                        int temp=a.back(); //���O�U�̫�@��
                        a.pop_back(); //�ȮɦR���L
                        int temp2=a.back(); //�A�O�U�̫�ĤG��
                        a.push_back(temp); //����̫�@����^�h
                        a.push_back(temp+temp2); //��Ƭۥ[ �A��^�h
                    }else if(op[0]=='D'){ //�ƻs�̫�@�� �Adouble��2��
                        a.push_back(a.back()*2);
                    }else if(op[0]=='C'){ //�R���̫�@��
                        a.pop_back();
                    }else{ //��stoi(op)��ƶ�^�h
                        a.push_back(stoi(op));
                    }
                }
            //�̫��for�j���}�Ca���ȥ����[�_��
            int ans=0;
            for(int now:a){ //C++�i���j�� �]�i�H��for(int i=0; i<a.size(); i++){int now=a[i]}
                ans+=now;
            }
            return ans;
    }
};
