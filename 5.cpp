#include<iostream>
using namespace std;
#define N 100

int shuzu(int h,int array2[N])
{
	int i;
    int h1;
	h1=h;
	int array3[N];
	int q;
	array3[0]=array2[0];
	int maxsize=array3[0];
	
	for(int e=0;e<=h-1;e++)
	{	
		array3[e]=array2[e];
		maxsize=array3[e];
		for(i=e+1;i<=h1;i++)
		{

		if(array3[i-1]>0)
		{
			array3[i]=array3[i-1]+array2[i];
			maxsize=max(maxsize,array3[i-1]);
		    q=array3[i];
			cout<<q<<endl;
		}
		else 
		{
			array3[i]=array2[i];
			q=array3[i];
			cout<<q<<endl;
		}
		} 
		
		array2[h1]=array2[e];
		h1=h1+1;
	}
	
	cout<<"子数组最大值为："<<maxsize;
	
	   return 0;
	}
int main()
{
	int i,j;
	cout<<"请输入环形数组大小：(1-10)"<<endl;
	cin>>j;

	int array1[N];

	cout<<"请输入"<<j<<"个数："<<endl;

	for(i=0;i<j;i++)
	{
		cin>>array1[i];
	}
	shuzu(j,array1);
	
	
	return 0;
}