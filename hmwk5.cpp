#include <iostream>
using namespace std;
int getPower(int x,int y){
    if(y<0)  return 1/getPower(x,-y);
  else if(y==0) return 1;
  else return getPower(x,y-1)*x;
}
double getPower(double x,int y){
   if(y==0) return 1;
   else if(y>0) return getPower(x,y-1)*x;
   else return 1.0/getPower(x,-y);
}

int main(){
    int a,m;
    double b;
    cin>>a;
    cin>>b;
    cin>>m;
    cout<<a<<" get power "<<m<<" is "<<getPower(a,m)<<endl;
    cout<<b<<" get power "<<m<<" is "<<getPower(b,m)<<endl;

    if(m<0) cout<<a<<" get power "<<m<<" is "<<getPower((double)a,m);
}