/*
All the avengers and Thanos Army have been to gather  at planet X for fight.At last fight
has started.All avenegrs are giving there best to fight but they are loosing against Mighty Thanos army.
So, Tony gave proposal to thanos that if he lose the chair game then all avengers will surrender and give 
all infinity stones and thor's Storm-breaker too.

Chair game contains N chair formed in shape of circle and player have to sit on them.Each player has to break the chair of
player sitting next to him. i.e player1 has to break the chair of player2 and then player2 loses the game and
turn given to the next player in sequence.

Last player sitting on chair wins the game.You have to help Tony to configure Algorithm in Jarvis.So, that
avengers can win and save universe.

input:
first line contain T test case and next line contains N (no. of chairs)
output:
you have to print "winning position:x" where x is winning position.

Sample Input:
   3
   19
   winning position:7
   50
   winning position:37
   64
   winning position:1


 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
int a[10],b[10],sum=0,n,j, i;
//cout<<"Enter the number to convert: ";
cin>>n;
int m,c=0;
m=n;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
//cout<<"Binary of the given number= ";
for(i=i-1 ;i>=0 ;i--)
{
//cout<<a[i];
c++;
}
//cout<<endl;
//cout<<"hi"<<c;

int k;
k=a[c-1];
for(i=c-1;i>=0;i--)
{
  a[i]=a[i-1];
  if(i==0)
  {
      a[i]=k;
  }
}
j=0;
for(i=c-1 ;i>=0 ;i--)
{
//cout<<a[i];
b[j]=a[i];
j++;
}
//cout<<"j"<<j;
//cout<<"b"<<endl;;
//for(i=0;i<j;i++)cout<<b[i];
int x=0;
for(i=j-1;i>=0;i--)
{

//sum=sum+(b[i]*pow(i,2));
//cout<<i<<"-"<<b[i]<<"-"<<pow(2,i)<<endl;
sum+=(b[i]*pow(2,x));
x++;
}
cout<<"win position:"<<sum<<endl;
cout<<endl;
    }
}
