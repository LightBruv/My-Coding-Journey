#include <iostream>
using namespace std;

int main()
{
	int num,num2,n,c,sum;
	cout<<"Enter ther 1st #: ";
	cin>>num;
	cout<<"Enter the 2nd #: ";
	cin>>num2;
	cout<<"Enter the Nth: ";
	cin>>n;
	n=0;
	c=1;
	for(c>0;c<=n;c++)
	if(n==0)
	sum=num+num2;
	num=num2;
	num2=sum;
	cout<<" "<<sum;
	
}
