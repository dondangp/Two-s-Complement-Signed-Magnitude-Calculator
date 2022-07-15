//Created and owned by Don Dang
#include <iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{
 
int numberz;
 printf("Enter an interger/number: ");
 cin>>numberz;
 
bool storage[32]; for (int x = 0; x< 32; x++)
 
{
 
storage[x]=0;
 
}
 
/*** Calculating signed magnitude ***/
 
for(int z=0;z<32;z++)
{
 
int testvariable=1<<z;
 
if(abs(numberz)&testvariable)
 
storage[32-z-1]=1;
 
else storage[32-z-1]=0;
 
}
 
if(numberz<0)
 
storage[0]=1;
 
printf("The signed magnitude value: ");
int forloop=8;
 
for(int x=0;x<32;x++)
{
 
cout<<storage[x];forloop--;
 
if(forloop==0) {cout<<" "; forloop=8;}
 
}
 
cout<<endl;
 
for (int x = 0; x < 32; x++)
{
 
storage[x]=0;
 
}
 
for(int b=0;b<32;b++)
 
{
 
int variabletry=1<<b;
 
if(numberz&variabletry) storage[32-b-1]=1;
 
else storage[32-b-1]=0;
 
}
 
forloop=8;
printf("The two's complement value: ");
 
for(int x=0;x<32;x++)
 
{
 
cout<<storage[x];
 
forloop--;
 
if(forloop==0) {cout<<" "; forloop=8;}
 
}
}
