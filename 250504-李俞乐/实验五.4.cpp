#include<bits/stdc++.h> 
using namespace std;
class Student{
	private:
		int grade[5];
		int num[5];
	public:
		void set_value();
		void Max_grade();
};
void Student::set_value()
{
	for(int i=0;i<5;i++)
	{
		int g,n;
		cin>>n>>g;
		grade[i]=g,num[i]=n;
	}
}
void Student::Max_grade()
{
	int Max=0,id=0;
	for(int i=0;i<5;i++)
	{
		if(Max<grade[i])  id=num[i],Max=grade[i];
	}
	cout<<id<<endl;
}
int main()
{
	Student stud;
	stud.set_value();
	stud.Max_grade();
	return 0;
}
