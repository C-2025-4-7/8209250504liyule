#include<bits/stdc++.h> 
using namespace std;
class Time
{
	private:
		int hour,minute,sec;
	public:
		void SetTime();
		void ShowTime();
};
void Time::SetTime()
{
	int h,m,s;
	cin>>h>>m>>s;
	hour=h,minute=m,sec=s;
}
void Time::ShowTime()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
	Time t;
	t.SetTime();
	t.ShowTime();
	return 0;
}
