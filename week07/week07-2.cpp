///week07-2.cpp
///�e�X�W�j����ΡA�Ʀr�]�_��
///TAICA v��j��¦�{���]�p(c++) ��6�D
#include <iostream>
#include <cmath> ///�N�Oc��math.h�̭���sin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n; ///p1:Input
    cin>>n;

    for (int i=1; i<n*2; i++){ ///p2:Output
        for (int j=1; j<n*2; j++){
            ///�L�X�ӵo�{�����ߪ�1�ܭ��n
            int d = max(abs(i-n), abs(j-n));
            cout<<d+1;
        }
        cout<<endl; ///cout<<"�{�bi�O: "<<i<<endl; ///�Ӽh������
    }
} ///2��3�h�� 3��5�h�� 4��7�h�� 5��9�h��
