/*
Tony Strac is in space right now and he want to know the time on earth but he cannot see time
beacuse his watch is damage.Nebula can repair the watch with his robotic hand.But there is problem
when nebula repairs the watch clocks format gets change from 12-Hr format to 24-hr format and also
she takes approx. 2hrs to finish repair work in that watch stop working for that 2hr.

Now you have to help tony for resting watch time because nebula can't reset it with earth time.

Note: Output will be in 24-hr format.

Sample: Test Case 1

07:45:02PM
21:45:02

Explantion:

07:45:02PM is in 12-hr Format
19:45:02  is in 24-hr Format
And 2 extra hrs for repairing of watch.
*/
#include<iostream>
using namespace std;

void convert(string str)
{
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);
	//cout<<"hh="<<hh<<endl;

	// If time is in "AM"
	if (str[8] == 'A')
	{
	if (hh == 12)
		{
		    hh=0;
		}

	}

	// If time is in "PM"
	else if(str[8] == 'P')
	{
		if (hh == 12)
		{
			hh=12;
		}
		else
		{
			hh = hh + 12;
		}
	}
	//cout<<"\n";
	int r=hh+2;
	if(r>24)  //if it exceed 24hr
    {
        int x=r-24;
        cout<<"0"<<x;
        for (int i=2; i <= 7; i++)
				cout << str[i];

     cout<<endl;
    }
    else
    {

        if(r>10)
        {
            cout<<r;
            for (int i=2; i <= 7; i++)
				cout << str[i];

        cout<<endl;
       }
    else
{
        cout<<"0"<<r;
        for (int i=2; i <= 7; i++)
				cout << str[i];

        cout<<endl;
}
}
}

int main()
{
int t;
cin>>t;
cin.ignore();
while(t--)
{
string str;
getline(cin,str);
convert(str);
}
}

