#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    int T,N;
    ll ctr;
    char ele;
    cin>>T;
    while(T--)
    {
        ctr=0;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>ele;
            if(ele=='1')
            ctr++;
        }
        cout<<(ctr*(ctr-1)/2)+ctr<<"\n";
    }
    return 0;
}