#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"请输入一个三位正整数"<<endl;
    cin>>n;
    int t=n;
    int m=0;
    while(t>0){
        int i=t%10;
        m+=i*i*i;
        t/=10;
    }
    if(m==n) cout<<n<<"是水仙数"<<endl;
    else cout<<n<<"不是水仙数"<<endl;
    for(int i=100;i<1000;i++){
        int x=i;
        int y=0;
        while(x>0){
            int k=x%10;
            x/=10;
            y+=k*k*k;
        }
        if(i==y) cout<<y<<endl;
    }
    return 0;
}
