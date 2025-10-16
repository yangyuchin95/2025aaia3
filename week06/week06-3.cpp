//week06-3.cpp
//學習計畫Simulation模擬第一題 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
                vector<int> a;
                for(string op : operations){ //C++進階迴圈
                    //cout << op << "\n"; //先試試看會印出甚麼
                    if(op[0]=='+'){ //末兩數相加再塞回去
                        int temp=a.back(); //先記下最後一項
                        a.pop_back(); //暫時吐掉他
                        int temp2=a.back(); //再記下最後第二項
                        a.push_back(temp); //把剛剛最後一項塞回去
                        a.push_back(temp+temp2); //兩數相加 再塞回去
                    }else if(op[0]=='D'){ //複製最後一位 再double乘2倍
                        a.push_back(a.back()*2);
                    }else if(op[0]=='C'){ //吐掉最後一位
                        a.pop_back();
                    }else{ //把stoi(op)整數塞回去
                        a.push_back(stoi(op));
                    }
                }
            //最後用for迴圈把陣列a的值全部加起來
            int ans=0;
            for(int now:a){ //C++進階迴圈 也可以用for(int i=0; i<a.size(); i++){int now=a[i]}
                ans+=now;
            }
            return ans;
    }
};
