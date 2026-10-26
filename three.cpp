#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"请输入一个整数"<<endl;
    cin>>n;
    int t=n;
    int m=0;
    while(t>0){
        int i=t%10;
        t/=10;
        m=m*10+i;
    }
    if(m==n) cout<<n<<"是回文数"<<endl;
    else cout <<n<<"不是回文数"<<endl;
    system("pause");
    return 0;
}
