#include<bits/stdc++.h>
#include"student.cpp"
using namespace std;
void Student::set_value()
{
	int n;
	char na[20],s;
	cin>>n;
	cin>>na;
	cin>>s;
	num=n,swap(na,name),sex=s;
}
void Student::display()
{
	cout<<"num: "<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"sex: "<<sex<<endl;
}

