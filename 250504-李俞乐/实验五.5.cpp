#include<bits/stdc++.h> 
using namespace std;
class Point{
	private:
		int x=60,y=80;
	public:
		void setPoint(int i,int j);
		void display();
};
void Point::setPoint(int i,int j)
{
	x+=i,y+=j;
}
void Point::display()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
int main()
{
	Point p;
	int i,j;
	cin>>i>>j;
	p.setPoint(i,j);
	p.display();
	return 0;
}
