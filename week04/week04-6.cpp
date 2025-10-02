///week04-6.cpp
///絤策贺罽皚 vector<int> a﹍て
#include <iostream>
#include <vector>
using namespace std;
int main()

{
    vector<int> a; ///⊿Τヴ﹍て把计 0
    cout<<endl<<"皚a琌"<<a.size()<<endl;

    vector<int> b(3); ///Τ把计 3
    cout<<endl<<"皚b琌"<<b.size()<<endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88); ///3 柑常峨88
    cout<<endl<<"皚c琌"<<c.size()<<endl;
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9,8,7,6,5,4,3,2,1,0};
    vector<int> f(d, d+4);
    cout<<endl<<"皚f琌"<<f.size()<<endl;
    for(int i=0; i<f.size(); i++) cout << f[i] << " ";

    vector<int> g(d, d+10);
    cout<<endl<<"皚g琌"<<g.size()<<endl;
    for(int i=0; i<g.size(); i++) cout << g[i] << " ";

}
