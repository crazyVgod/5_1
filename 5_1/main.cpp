#include <iostream>
using namespace std;

int change(int x)
{
	int y;
	y=((x-32)*5)/9;
	return y;
}
int main()
{
	int c;
	int f;
	cout<<"please input a temperature number"<<endl;
	cin>>f;
	c=change(f);
	cout<<"c="<<c<<endl;
	return 0;
}
