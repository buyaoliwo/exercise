#include <iostream>
using namespace std;
int Mgys(int x,int y){
    if(x<y){
        int temp=x;
        x=y;
        y=temp;
    }
    while(x%y) { 
        int i=x;
        x=y;
        y=i%y;
    }
    return y;
}
int Mgbs(int x,int y){
     int i=Mgys(x,y);
     for(int r=1;;r++){
        if (r*i%x==0&&r*i%y==0) return i*r;
     }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<"和"<<b<<"最大公约数是"<<Mgys(a,b)<<endl;
    cout<<a<<"和"<<b<<"最小公倍数是"<<Mgbs(a,b)<<endl;
}