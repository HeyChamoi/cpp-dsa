#include<bits/stdc++.h>
using namespace std;

int findClosest(int x,int y,int z)
{
    int dist1=abs(z-x);
    int dist2=abs(z-y);

    if(dist1==dist2)
        return 0;
    else if(dist1<dist2)
        return 1;
    else
        return 2;
}

int main()
{
    int x,y,z;

    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;

    cout<<findClosest(x,y,z);

    return 0;
}