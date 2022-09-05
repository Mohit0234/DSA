#include<iostream>
using namespace std;
int main()
{
int hour;
cout<<"Enter Hour=";
cin>>hour;
while(hour<=24){
if(hour>=9 && hour<=18){
    cout<<"Working hour"<<endl;}
else{
    cout<<"Leisure hour"<<endl;}return 0;}
cout<<"Enter a valid number between 1 to 24 number";
return 0;
}