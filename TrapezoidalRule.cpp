#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    double r=exp(x);
    return r;
}
int main()
{
    double a,b,n,x,y,h;
    cout<<"Enter limit a and b : ";
    cin>>a>>b;
    cout<<"Enter n : ";
    cin>>n;
    h=(b-a)/n;
    y=0;
    for(int i=1;i<=n-1;i++){
        y+=func(a+i*h);
    }
    y*=2;
    y+=func(a)+func(b);
    y*=h/2;
    cout<<"---------------------------"<<endl;
    cout<<"   I1 :"<<y<<endl;

}
/* -1 1
2
*/
