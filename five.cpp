#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"请输入一个正整数"<<endl;
    cin>>n;
    int a;
    cout<<"请输入一个1到9中的自然数"<<endl;
    cin>>a;
    int he=0;
    for(int i=1;i<n+1;i++){
        int b=0;
        for(int j=1;j<=i;j++){
            b=b*10+a;
        }
        he+=b;
    }
    cout<<"该数列和为"<<he<<endl;
}
