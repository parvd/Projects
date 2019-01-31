/*Hello Greeks This is famous Joseph Problem in which there are n solider sitting on round table and their are covered by enemy. All the soldiers which are sitting on the table do not want to surrender so they decide to kill them.They kill the person sitting next him i.e soldier sitting on chair1 will kill person sitting on preceeding chair. so, suppose yash(your friend) is among that soldier sitting on chair and you are not willing let him die and want him to surrender then on which chair he shouldseat to protect his life. Help him to save his life.*/


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
cout<<"win position-"<<sum<<endl;
cout<<endl;
    }
}

