#include<bits/stdc++.h>
using namespace std;
class Rec
{
	private:
		int length;
		int width;
		int height; 
	public:
		void set_value();
		int cal_vol();
		void Show_vol();
};
void Rec::set_value()
{
	int l,w,h;
	cin>>l>>w>>h;
	length=l,width=w,height=h;
}
int Rec::cal_vol()
{
	return length*width*height;
}
void Rec::Show_vol()
{
	cout<<cal_vol()<<endl;
}
int main()
{
	Rec a[3];
	for(int i=0;i<3;i++)
	{
		cout<<"请输入第" <<i+1<<"个长方体的长,宽,高:";
		a[i].set_value();
//		cout<<endl;
		cout<<"第" <<i+1<<"个长方体的体积:";
		a[i].Show_vol();
	}
	return 0;
}
