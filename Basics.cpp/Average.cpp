#include<iostream>
using namespace std;
int main()
{
    int l,b,m,T,Avg;
    cout<<"Enter the price of laptop :";
    cin>>l;
    cout<<"Enter the price of book :";
    cin>>b;
    cout<<"Enter the price of mobile :";
    cin>>m;
    T=l+b+m;
    Avg=T/3;
    cout<<"Total price of the product :"<<T<<endl;
    cout<<"Average price of the product :"<<Avg<<endl;
}