#include <iostream>
using namespace std;
void fact(int n){
    int i=2;
    if(n==1) cout<<n<<" isn`t a factorial"<<endl;
    else{
        for(i;i<=n/2;i++){
            if(n%i==0) {
                cout<<n<<" isn`t a factorial"<<endl;
                return; 
            }
        }
        cout<<n<<" is a factorial"<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    fact(n);
}