#include <iostream>
using namespace std;
short int Divide(unsigned short int x,unsigned short int y){
    if(y) {
        short int t=x/y;
        return t;
    }
    else return -1;
}
int main(){
    unsigned short int a,b;
    cin>>a>>b;
    cout<<Divide(a,b)<<endl;
}
