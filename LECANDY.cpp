#include <iostream>
using namespace std;

int main()
{
    int T,N,sum=0,A[100];
    long long int C;
    cin>>T;
    for(int i=0;i<T;i++)
    {   
        sum=0;
        cin>>N>>C;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        if(sum>C)
        {
            cout<<"No"<<endl;

        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
