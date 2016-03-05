#include<iostream>
using namespace std;

void main()
{
	int i;
	for(i=0;i<30;i++){
	int j,a,b,x,y,z;
	x=rand()%10;
	y=rand()%10;
	a=rand()%10;
	b=rand()%10;
	z=rand()%4;
	j=rand()%2;
	if(j==0){
	
	if(z==0)
	{cout<<x<<"+"<<y<<endl;}
	
	if(z==1)
	{cout<<x<<"-"<<y<<endl;}
	
	if(z==2)
	{cout<<x<<"*"<<y<<endl;}
	
	if(z==3)
	{cout<<x<<"/"<<y<<endl;}
	
	}
	if(j==1){
		if(a==0||b==0)
		{   i=i-1; }
		else 
		{
			if(x>a){int c;c=x;x=a;a=c;}
			if(y>b){int d;d=y;y=b;b=d;}
			if(z==0)
			{cout<<x<<"/"<<a<<"+"<<y<<"/"<<b<<endl;}
			if(z==1)
			{cout<<x<<"/"<<a<<"-"<<y<<"/"<<b<<endl;}
			if(z==2)
			{cout<<x<<"/"<<a<<"*"<<y<<"/"<<b<<endl;}
			if(z==3)
			{cout<<x<<"/"<<a<<"/"<<y<<"/"<<b<<endl;}
		}
	}
}
}