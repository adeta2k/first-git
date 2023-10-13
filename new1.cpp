#include<iostream>
using  namespace std;
int main ()
{
int M1,M2,M3,T;
float P;
cout<<"enter a value for first subject\n";
cout<<"enter a value for second subject\n";
cout<<"enter a value for third subject\n";
cin>>M1>>M2>>M3;
T = M1+M2+M3 ;


P = (float)T/300 * 100;

cout<<T<<"\n"<<P;
return 0;

}