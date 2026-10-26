#include <iostream>
using namespace std;

int main(){
    double profit;
    cout<<"请输入你所赚的利润，单位万元"<<endl;
    cin>>profit;
    double a1=0.1;
    double a2=0.075;
    double a3=0.05;
    double a4=0.03;
    double a5=0.015;
    double bonus;
    if(profit<=10) bonus=profit*a1;
    else if(profit<=20) bonus=10*a1+(profit-10)*0.075;
    else if (profit<=40) bonus=10*a1+10*a2+(profit-20)*0.05;
    else if (profit<=60) bonus=10*a1+10*a2+20*0.05+(profit-40)*0.03;
    else if (profit<=100) bonus=10*a1+10*a2+20*a3+20*a4+(profit-60)*0.015;
    else bonus=10*a1+10*a2+20*a3+20*a4+40*a5+(profit-100)*0.01;
    cout<<"恭喜你，你获得奖金"<<bonus<<"万元"<<endl;
    return 0;
}
