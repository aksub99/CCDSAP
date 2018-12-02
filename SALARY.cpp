#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int T,N,sum;
    cin>>T;
    while(T--){
        sum=0;
        cin>>N;
        int W[N];
        for(int i=0;i<N;i++)
        {
            cin>>W[i];
        }
        int min=W[0],pos;
        for(int i=1;i<N;i++)
        {
            if(W[i]<min)
            min=W[i];
        }
        for(int i=0;i<N;i++)
        {
            sum+=W[i]-min;
        }
        cout<<sum<<endl;
    }
}