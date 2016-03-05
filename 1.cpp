//3.3.2016 tangyeye
#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;
#define MAX 100

int main(int argc,char*argv[])
{   
	int a,b,c,d,e;
	
srand((unsigned)time(NULL));
for(int i=0;i<58;i++)
   {
	a=rand()%MAX;
    b=rand()%MAX;
	d=rand()%MAX;
	e=rand()%MAX;
	
	if(d<e&&e!=0)
	{
   
	c=rand()%12+1;
	switch(c)
	   {
		case 1: cout<<a<<"+"<<b<<endl;
	    break;

		case 2: cout<<a<<"-"<<b<<endl;
		break;

		case 3: cout<<a<<"*"<<b<<endl;
		break;

		case 4: cout<<a<<"/"<<b<<endl;
		break;

		case 5: cout<<d<<"/"<<e<<"+"<<b<<endl;
	    break;

		case 6: cout<<a<<"+"<<d<<"/"<<e<<endl;
		break;
		
		case 7: cout<<d<<"/"<<e<<"-"<<b<<endl;
	    break;

		case 8: cout<<a<<"-"<<d<<"/"<<e<<endl;
		break;

		case 9: cout<<d<<"/"<<e<<" "<<"*"<<b<<endl;
	    break;

		case 10: cout<<a<<"*"<<" "<<d<<"/"<<e<<endl;
		break;

		case 11: cout<<d<<"/"<<e<<" "<<"/"<<b<<endl;
	    break;

		case 12: cout<<a<<"/"<<" "<<d<<"/"<<e<<endl;
		break;

       }

	}
}
    return 0;

}

