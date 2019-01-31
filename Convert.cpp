#include<bits/stdc++.h>
using namespace std;
string timeconvert(string c)
{
  int len=0;
  len=c.length();
//cout<<len<<endl;
//for(int i=0;i<len;i++)
    //cout<<"c"<<i<<"="<<c[i]<<endl;
//cout<<"c9="<<c[9]<<endl;
if(c[9]=='M'&&c[8]=='P')
{
    //cout<<"hi\n";
if(c[0]=='0'&&c[1]=='1')
{
          c[0]='1';
          c[1]='3';
}
else if(c[0]=='0'&&c[1]=='2')
      {c[0]='1';c[1]='4';}

       else if(c[0]=='0'&&c[1]=='3')
      {c[0]='1';c[1]='5';}

       else if(c[0]=='0'&&c[1]=='4')
      {c[0]='1';c[1]='6';}

         else if(c[0]=='0'&&c[1]==5)
      {c[0]='1';c[1]='7';}

         else if(c[0]=='0'&&c[1]=='6')
      {c[0]='1';c[1]='8';}

         else if(c[0]=='0'&&c[1]=='7')
      {c[0]='1';c[1]='9';}

       else if(c[0]=='0'&&c[1]=='8')
      {c[0]='2';c[1]='0';}

        else if(c[0]=='0'&&c[1]=='9')
      {c[0]='2';c[1]='1';}

          else if(c[0]=='1'&&c[1]=='0')
      {c[0]='2';c[1]='2';}

          else if(c[0]=='1'&&c[1]=='1')
      { c[0]='2';c[1]='3';}

          else if(c[0]=='1'&&c[1]=='2')
      { c[0]='1';c[1]='2'; }

}
else if (c[8]=='A'&&c[9]=='M')
{
    if(c[0]=='1'&&c[1]=='2')
    {
        c[0]='0';c[1]='0';
    }
}

return c;

}
int main()
{
    string s;
    getline(cin,s);
   string r;
   r=timeconvert(s);
   for(int j=0;j<8;j++)
    cout<<r[j];
}
