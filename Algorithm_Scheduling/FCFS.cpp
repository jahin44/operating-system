//First Come First Served c++ code .

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,b,c[100],w[100],t[100];
    float a1=0,s1=0,s2=0,a2;
    vector<pair <int,int > >v;
    scanf("%d",&n);

    for(i=0;i<n;++i){
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int x=0;
    for(i=0;i<n;++i){
        c[i]=x+v[i].second;
        x+=v[i].second;
    }


    for(i=0;i<n;++i){
        t[i]=c[i]-v[i].first;
        s1+=t[i];
    }
    for(i=0;i<n;++i){
        w[i]=t[i]-v[i].second;
        s2+=w[i];
    }



    for(i=0;i<n;++i){
        printf("P[%d] %d %d\n",i+1,w[i],t[i]);
    }

    printf("%f %f\n",s2/n,s1/n);



}
