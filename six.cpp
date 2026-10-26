#include <iostream>
using namespace std;

int main(){
    for(int j=1;j<10;j++){
        for(int i=1;i<j+1;i++){
            if(i*j<10) cout<<i<<"*"<<j<<"="<<i*j<<"  ";
            else cout<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
