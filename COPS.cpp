
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T,M,x,y,ele,ctr;
    cin>>T;
    while(T--)
    {
        vector <int> cops;
        ctr=0;
        cin>>M>>x>>y;
        for(int i=0;i<M;i++)
        {
            cin>>ele;
            cops.push_back(ele);
        }
        sort(cops.begin(),cops.end());
        /*for(int i=0;i<M;i++)
        {
            cout<<cops[i];
        }*/
        //cout<<endl;
        vector <pair<int,int>> range;
        for(int i=0;i<M;i++)
        {
            range.push_back(make_pair(cops[i]-x*y,cops[i]+x*y));
            //cout<<range[i].first<<" "<<range[i].second<<endl;
        }
        if (range[0].first>1)
        ctr+=(range[0].first-1);
        for(int i=0;i<M-1;i++)
        {
            if(range[i].second<range[i+1].first)
            ctr+=(range[i+1].first-range[i].second-1);
        }
        if(range[M-1].second<100)
        ctr+=(100-range[M-1].second);
    cout<<ctr<<endl;
    }
return 0;
}