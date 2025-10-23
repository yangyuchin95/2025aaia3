///week07-2.cpp
///礶禬タよ计癬ㄓ
///TAICA vユ膀娄祘Α砞璸(c++) 材6肈
#include <iostream>
#include <cmath> ///碞琌cmath.h柑Τsin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n; ///p1:Input
    cin>>n;

    for (int i=1; i<n*2; i++){ ///p2:Output
        for (int j=1; j<n*2; j++){
            ///ㄓ祇瞷タいみ1璶
            int d = max(abs(i-n), abs(j-n));
            cout<<d+1;
        }
        cout<<endl; ///cout<<"瞷i琌: "<<i<<endl; ///加糷阀├
    }
} ///2Τ3糷加 3Τ5糷加 4Τ7糷加 5Τ9糷加
