#include <iostream>
using namespace std;

int main(){
    int s;
    cout<<"请给电影打分，满分是十分哦"<<endl;
    cin>>s;
    switch (s){
        case 1:
        case 2:
        case 3:
        case 4:
        cout<<"你认为该影片是烂片"<<endl;
        break;
        case 5:
        case 6:
        cout<<"你认为该影片一般"<<endl;
        break;
        case 7:
        case 8:
        cout<<"你认为该影片非常好"<<endl;
        break;

        case 9:
        case 10:
        cout<<"你认为该影片经典"<<endl;
    }
    return 0;
}
