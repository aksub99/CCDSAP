#include <iostream>
using namespace std;
int main(){
    int T,X,Y,K,N,flag=0;
    cin>>T;
    while(T--){
        flag=0;
        cin>>X>>Y>>K>>N;
        int P,C;    
        for(int i=0;i<N;i++){
            cin>>P>>C;
            if(P>=X-Y && C<=K){
                flag=1;
            }
        }
        if(flag){
            cout<<"LuckyChef\n";
        }
        else{
            cout<<"UnluckyChef\n";
        }
    }
}