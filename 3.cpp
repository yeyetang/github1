//2016.3.15 唐野野，胡潘华
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<fstream>
#include<ostream>
#include<string>
#include<stdlib.h>
using namespace std;
#define MAX N


/*无打印功能的无括号算式*/
//int a(void)
//{   
		
//}


/*有打印功能的无括号算式*/
//int b(void)
//{
//}

/*无打印功能的带括号的算式*/
int q(void)
{
	srand((unsigned)time(NULL));
	int i,j,x,a,b,c,d,n3,c2,v1,h1;
	int y,y1,y2,y3,y4,y5,y6,y7,y8,y9,y0;
	char t0[20],t1[20],t2[20],t3[20],t4[20],t5[20],t6[20],t7[20],t8[20],t9[20];
	string a2,a3,a4,a5,a6,a7,a8,a9,a10;
	char b1[10],c1,d1[10];
	char a1[4]={'+','-','*','/'};
	char p[10];
	char p1[10],p2[10];
	int N;
	
	cout<<"请输入题目的数量！"<<endl;
	cin>>i;
	cout<<"请输入多少数以内的四则运算"<<endl;
	cin>>N;
	//cout<<"是否有乘除号？（1是，0否）"<<endl;
	//cin>>x;
	
	for(j=0;j<i;j++)
	{
		int yzero=rand()%3;//定义z0..z9所匹配的项目
        int yone=rand()%3;
        int ytwo=rand()%3;
		int ythree=rand()%3;
	    int yfour=rand()%3;
        int yfive=rand()%3;
        int ysix=rand()%3;
		h1=rand()%10;//定义生成表达式里数的个数
		y0=rand()%N;itoa(y0,t0,10);string z0=t0;
        y1=rand()%N;itoa(y1,t1,10);string z1=t1;
        y2=rand()%N;itoa(y2,t2,10);string z2=t2;
        y3=rand()%N;itoa(y3,t3,10);string z3=t3;
        y4=rand()%N;itoa(y4,t4,10);string z4=t4;
        y5=rand()%N;itoa(y5,t5,10);string z5=t5;
        y6=rand()%N;itoa(y6,t6,10);string z6=t6;
        y7=rand()%N;itoa(y7,t7,10);string z7=t7;
        y8=rand()%N;itoa(y8,t8,10);string z8=t8;
        y9=rand()%N;itoa(y9,t9,10);string z9=t9;

		int l=rand()%4;
		a2=z0+a1[l]+z1;

		l=rand()%4;
		 switch(yzero){
		 case 0:
             {a3='('+a2+')'+a1[l]+z2;break;}
         case 1:
             {a3=z2+a1[l]+'('+a2+')';break;}
         case 3:
             {a3=a2+a1[l]+z2;break;}
         }
		 l=rand()%4;
	     switch(yone){
         case 0:
              {a4='('+a3+')'+a1[l]+z3;break;}
         case 1:
              {a4=z3+a1[l]+'('+a3+')';break;}
         case 2:
              {a4=z3+a1[l]+a3;break;}
           }
		 l=rand()%4;
         switch(ytwo){
         case 0:
             {a5='('+a4+')'+a1[l]+z4;break;}
         case 1:
             {a5=z4+a1[l]+'('+a4+')';break;}
         case 2:
             {a5=z4+a1[l]+a4;break;}
           }
		 l=rand()%4;
         switch(ythree){
         case 0:
             {a6='('+a5+')'+a1[l]+z5;break;}
         case 1:
             {a6=z5+a1[l]+'('+a5+')';break;}
         case 2:
             {a6=z5+a1[l]+a5;break;}
             }
		 l=rand()%4;
         switch(yfour){
         case 0:
         {a7='('+a6+')'+a1[l]+z6;break;}
         case 1:
         {a7=z6+a1[l]+'('+a6+')';break;}
         case 2:
         {a7=z6+a1[l]+a6;break;}
              }
		 l=rand()%4;
         switch(yfive){
         case 0:
         {a8='('+a7+')'+a1[l]+z7;break;}
         case 1:
         {a8=z7+a1[l]+'('+a7+')';break;}
         case 2:
         {a8=z7+a1[l]+a7;break;}
              }
		 l=rand()%4;
         switch(ysix){
         case 0:
         {a9='('+a8+')'+a1[l]+z8;break;}
         case 1:
         {a9=z8+a1[l]+'('+a8+')';break;}
         case 2:
         {a9=z8+a1[l]+a8;break;}
             }
		  
		 int  n2=rand()%3;
         switch(h1){
            case 0:
                 {j=j-1;break;}
            case 1:
                 {j=j-1;break;}
            case 2:
                 {a2=z0+a1[l]+z1;
                 cout<<a2<<endl;break;}
            case 3:
                 {
                     if(n2==2)
                     {a3='('+a2+')'+a1[l]+z2;
                     cout<<a3<<endl;break;}
                     if(n2==1)
                     {a3=z2+a1[l]+'('+a2+')';
                     cout<<a3<<endl;break;}
                     if(n2==0)
                     {a3=a2+a1[l]+z2;
                     cout<<a3<<endl;break;}
                 }
             case 4:
                 {
                     if(n2==2)
                     {a4='('+a3+')'+a1[l]+z3;
                     cout<<a4<<endl;break;}
                     if(n2==1)
                     {a4=z3+a1[l]+'('+a3+')';
                     cout<<a4<<endl;break;}
                     if(n2==0)
                     {a4=z3+a1[l]+a3;
                     cout<<a4<<endl;break;}
                 }
             case 5:
                 {
                     if(n2==2)
                    {a5='('+a4+')'+a1[l]+z4;
                     cout<<a5<<endl;break;}
                     if(n2==1)
                     {a5=z4+a1[l]+'('+a4+')';
                    cout<<a5<<endl;break;}
                     if(n2==0)
                    {a5=z4+a1[l]+a4;
                    cout<<a5<<endl;break;}
                 }
             case 6:
                 {
                     if(n2==2)
                     {a6='('+a5+')'+a1[l]+z5;
                     cout<<a6<<endl;break;}
                     if(n2==1)
                    {a6=z5+a1[l]+'('+a5+')';
                    cout<<a6<<endl;break;}
                     if(n2==0)
                     {a6=z5+a1[l]+a5;
                     cout<<a6<<endl;break;}
                 }
             case 7:
                 {
                     if(n2==2)
                     {a7='('+a6+')'+a1[l]+z6;; 
                    cout<<a7<<endl;break;}
                     else if(n2==1)
                     {a7=z6+a1[l]+'('+a6+')';
                     cout<<a7<<endl;break;}
                    else if(n2==0)
                     {a7=z6+a1[l]+a6;
                     cout<<a7<<endl;break;}
                 }
             case 8:
                 {
                     if(n2==2)
                    {a8='('+a7+')'+a1[l]+z7;
                     cout<<a8<<endl;break;}
                     if(n2==1)
                     {a8=z7+a1[l]+'('+a7+')';
                     cout<<a8<<endl;break;}
                     if(n2==0)
                     {a8=z7+a1[l]+a7;
                     cout<<a8<<endl;break;}
                 }
            case 9:
                {
                     if(n2==2)
                     {a9='('+a8+')'+a1[l]+z8;
                     cout<<a9<<endl;break;}
                     if(n2==1)
                     {a9=z8+a1[l]+'('+a8+')';
                     cout<<a9<<endl;break;}
                     if(n2==0)
                     {a9=z8+a1[l]+a8;
                     cout<<a9<<endl;break;}
 
				}
		 }
		 }
		 return 0;
		    

}
int liunianji(void)
{
	int h;
	cout<<"是否要给六年级同学出题："<<endl;
	cin>>h;
	if(h==1)
	{
		srand((unsigned)time(NULL));
	int i,j,x,a,b,c,d,n3,c2,v1,h1;
	int y,y1,y2,y3,y4,y5,y6,y7,y8,y9,y0;
	char t0[20],t1[20],t2[20],t3[20],t4[20],t5[20],t6[20],t7[20],t8[20],t9[20];
	string p2,p3,p4,p5,p6,p7,p8,p9,p10;
	char b1[10],c1,d1[10];
	char a1[4]={'+','-','*','/'};
	char a2[10];
	char aj;
	int  a4[4]={1,1,2,2};
	int  a5[10];
	char p[10];
	char p1[10],o[10];
	
	int N;
	
	cout<<"请输入题目的数量！"<<endl;
	cin>>i;
	int  b2[10],a3[100],s1[100];
	cout<<"请输入多少数以内的四则运算"<<endl;
	cin>>N;
	//cout<<"是否有乘除号？（1是，0否）"<<endl;
	//cin>>x;
	
	for(j=0;j<i;j++)
	{
		int yzero=rand()%3;//定义z0..z9所匹配的项目
        int yone=rand()%3;
        int ytwo=rand()%3;
		
		//定义生成表达式里数的个数
		y0=rand()%N;itoa(y0,t0,10);string z0=t0;
        y1=rand()%N;itoa(y1,t1,10);string z1=t1;
        y2=rand()%N;itoa(y2,t2,10);string z2=t2;
        y3=rand()%N;itoa(y3,t3,10);string z3=t3;
        y4=rand()%N;itoa(y4,t4,10);string z4=t4;
        y5=rand()%N;itoa(y5,t5,10);string z5=t5;
       
		int l=rand()%4;
		p2=z0+a1[l]+z1;
		if(a1[l]=='+')
		{b2[0]=y0+y1;}
		if(a1[l]=='-')
	    {b2[0]=y0-y1;}
		if(a1[l]=='*')
		{b2[0]=y0*y1;}
		if(a1[l]=='/')
		{b2[0]=y0/y1;}
		a5[0]=a4[l];
		a2[0]=a1[l];
		

		 l=rand()%4;
		
		 a5[1]=a4[l];
		 a2[1]=a1[l];
		 switch(yzero){
		 case 0:
             {
				 p3='('+p2+')'+a1[l]+z2;
			     if(a1[l]=='+')
		         {b2[1]=b2[0]+y2;}
		         if(a1[l]=='-')
	             {b2[1]=b2[0]-y2;}
		         if(a1[l]=='*')
		         {b2[1]=b2[0]*y2;}
		         if(a1[l]=='/')
		         {b2[1]=b2[0]/y2;}

			 }
			 break;
         case 1:
             {p3=z2+a1[l]+'('+p2+')';
			  if(a1[l]=='+')
		     {b2[1]=b2[0]+y2;}
		      if(a1[l]=='-')
	         {b2[1]=b2[0]-y2;}
		      if(a1[l]=='*')
		     {b2[1]=b2[0]*y2;}
		      if(a1[l]=='/')
		     {b2[1]=b2[0]/y2;}
			 }break;
         case 2:
             { p3=p2+a1[l]+z2;
			   a5[1]=a4[l];
			   if(a5[0]>=a5[1])
			  {if(a1[l]=='+')
		      {b2[1]=b2[0]+y2;}
		       if(a1[l]=='-')
	          {b2[1]=b2[0]-y2;}
		       if(a1[l]=='*')
		      {b2[1]=b2[0]*y2;}
		       if(a1[l]=='/')
		      {b2[1]=b2[0]/y2;}
			 }
			   if(a5[0]<a5[1])
			   {
				   int n1;
				   n1=a5[0];
				   a5[0]=a5[1];
				   a5[1]=n1;
				   aj=a2[0];
				   a2[0]=a2[1];
				   a2[1]=aj;
				   if(a2[0]=='+')
				   {
					   if(a1[l]=='*'){
					   b2[1]=y1*y2;
					   b2[1]=b2[1]+y0;
					   }
					   if(a1[l]=='/'){
					   b2[1]=y1/y2;
					   b2[1]=b2[1]+y0;
					   }

				   }
				    if(a2[0]=='-')
				   {
					   if(a1[l]=='*'){
					   b2[1]=y1*y2;
					   b2[1]=b2[1]-y0;
					   }
					   if(a1[l]=='/'){
					   b2[1]=y1/y2;
					   b2[1]=b2[1]-y0;
					   }

				   }

			   }

			   }

		
        break;
		 }


		
		l=rand()%4;
		a5[2]=a4[l];
		a2[2]=a1[l];
	     switch(yone){
         case 0:
              {p4='('+p3+')'+a1[l]+z3;
			    if(a1[l]=='+')
		        {b2[2]=b2[1]+y3;}
		        if(a1[l]=='-')
	            {b2[2]=b2[1]-y3;}
		        if(a1[l]=='*')
		        {b2[2]=b2[1]*y3;}
		        if(a1[l]=='/')
		        {b2[2]=b2[1]/y3;}
			  }
         case 1:
              {p4=z3+a1[l]+'('+p3+')';
			   if(a1[l]=='+')
		        {b2[2]=b2[1]+y3;}
		        if(a1[l]=='-')
	            {b2[2]=b2[1]-y3;}
		        if(a1[l]=='*')
		        {b2[2]=b2[1]*y3;}
		        if(a1[l]=='/')
		        {b2[2]=b2[1]/y3;}}
         case 2:
              {p4=z3+a1[l]+p3;
			  a5[2]=a4[l];
			  if(a5[0]>a5[2])
			  {if(a1[l]=='+')
		      {b2[2]=b2[1]+y2;}
		       if(a1[l]=='-')
	          {b2[2]=b2[1]-y2;}
		       if(a1[l]=='*')
		      {b2[2]=b2[1]*y2;}
		       if(a1[l]=='/')
			  {b2[2]=b2[1]/y2;}
			   }

			  if(a5[0]==a5[2])
			  {
				  if(a1[l]=='+'){
					  if(a2[0]=='+'){
						  if(a2[1]=='+'){
							  b2[2]=y0+y1;
							  b2[2]=b2[2]+y3;
							  b2[2]=b2[2]+y3;
						  }
						  if(a2[1]=='-'){
							  b2[2]=y0+y1;
							  b2[2]=b2[2]-y3;
							  b2[2]=b2[2]+y3;
						  }
					  }
					  if(a2[0]=='-'){
						  if(a2[l]=='+'){
							  b2[2]=y0-y1;
							  b2[2]=b2[2]+y3;
							  b2[2]=b2[2]+y3;
						  }
						  if(a2[l]=='-'){
							  b2[2]=y0-y1;
							  b2[2]=b2[2]-y3;
							  b2[2]=b2[2]+y3;
						  }
					  }
				  
				  }
				  if(a1[l]=='-'){
					  if(a2[0]=='+'){
						  if(a2[l]=='+'){
							  b2[2]=y0+y1;
							  b2[2]=b2[2]+y3;
							  b2[2]=b2[2]-y3;
						  }
						  if(a2[l]=='-'){
							  b2[2]=y0+y1;
							  b2[2]=b2[2]-y3;
							  b2[2]=b2[2]-y3;
						  }
					  }
					  if(a2[0]=='-'){
						  if(a2[l]=='+'){
							  b2[2]=y0-y1;
							  b2[2]=b2[2]+y3;
							  b2[2]=b2[2]-y3;
						  }
						  if(a2[1]=='-'){
							  b2[2]=y0-y1;
							  b2[2]=b2[2]-y3;
							  b2[2]=b2[2]-y3;
						  }
					  }
				  }
				  if(a1[l]=='*'){
                     if(a2[1]=='+'){
						 if(a2[0]=='*')
					  {int ax=y0*y1;int bx=y2*y3;b2[2]=ax+bx;}
						  if(a2[0]=='/')
						  {int ax=y0/y1;int bx=y2*y3;b2[2]=ax+bx;}}
						   if(a2[1]=='-'){
						 if(a2[0]=='*')
					  {int ax=y0*y1;int bx=y2*y3;b2[2]=ax-bx;}
						  if(a2[0]=='/')
						  {int ax=y0/y1;int bx=y2*y3;b2[2]=ax-bx;}}
						   if(a2[1]=='*'||'/')
						   {b2[2]=b2[1]*y3;}

				  }
				  if(a1[l]=='/'){
                     if(a2[1]=='+'){
						 if(a2[0]=='*')
					  {int ax=y0*y1;int bx=y2/y3;b2[2]=ax+bx;}
						  if(a2[0]=='/')
						  {int ax=y0/y1;int bx=y2/y3;b2[2]=ax+bx;}}
						   if(a2[1]=='-'){
						 if(a2[0]=='*')
					  {int ax=y0*y1;int bx=y2/y3;b2[2]=ax-bx;}
						  if(a2[0]=='/')
						  {int ax=y0/y1;int bx=y2/y3;b2[2]=ax-bx;}}
						   if(a2[1]=='*'||'/')
						   {b2[2]=b2[1]/y3;}

				  }


           }
			  if(a5[0]<a5[2])
			  {
				  	  if(a1[l]=='*'){
					  if(a2[0]=='+'){
						  if(a2[1]=='+'){
							  b2[2]=y3*y2;
							  b2[2]=b2[2]+y0;
							  b2[2]=b2[2]+y1;
						  }
						  if(a2[1]=='-'){
							  b2[2]=y3*y2;
							  int xz=y0+y1;b2[2]=xz-b2[2];
							  
						  }
					  }
					  if(a2[0]=='-'){
						  if(a2[l]=='+'){
							  b2[2]=y3*y2;
							  int at=y0-y1;
							  b2[2]=y2+b2[2];
						  }
						  if(a2[l]=='-'){
							  b2[2]=y3*y2;
							  int ap=y0-y1;
							  b2[2]=y2-b2[2];
						  }
					  }
				  
				  }
				  if(a1[l]=='/'){
					  if(a2[0]=='+'){
						  if(a2[1]=='+'){
							  b2[2]=y3/y2;
							  b2[2]=b2[2]+y0;
							  b2[2]=b2[2]+y1;
						  }
						  if(a2[1]=='-'){
							  b2[2]=y3/y2;
							  int xz1=y0+y1;b2[2]=xz1-b2[2];
							  
						  }
					  }
					  if(a2[0]=='-'){
						  if(a2[l]=='+'){
							  b2[2]=y3/y2;
							  int at1=y0-y1;
							  b2[2]=y2+b2[2];
						  }
						  if(a2[l]=='-'){
							  b2[2]=y3/y2;
							  int ap1=y0-y1;
							  b2[2]=y2-b2[2];
						  }
					  }
				  
			  }
			  }
}
			  break;
		 
 }
		
		
		 h1=rand()%2+3; 
		 int  n2=rand()%3;
         switch(h1){
           
            case 2:
                 {p2=z0+a1[l]+z1;
                 cout<<p2<<endl;
				 s1[j]=b2[0];}break;
            case 3:
                 {
                     if(n2==2)
                     {p3='('+p2+')'+a1[l]+z2;
                     cout<<p3<<endl;}
                     if(n2==1)
                     {p3=z2+a1[l]+'('+p2+')';
                     cout<<p3<<endl;}
                     if(n2==0)
                     {p3=p2+a1[l]+z2;
                     cout<<p3<<endl;}
					 s1[j]=b2[1];
                 }
            break;
			 case 4:
                 {
                     if(n2==2)
                     {p4='('+p3+')'+a1[l]+z3;
                     cout<<p4<<endl;break;}
                     if(n2==1)
                     {p4=z3+a1[l]+'('+p3+')';
                     cout<<p4<<endl;break;}
                     if(n2==0)
                     {p4=z3+a1[l]+p3;
                     cout<<p4<<endl;break;}
					 s1[j]=b2[2];
                 }break;
            

		 
		 }
		 
		 cout<<"请输入你的答案："<<endl;
		cin>>v1;
		a3[j]=v1;
		
		if(a3[j]==s1[j])
		{
			int g1=g1+1;
			cout<<"答对了，真棒！！"<<endl;
			cout<<"你已答对了"<<g1<<"道题"<<endl;
		}
		if(a3[j]!=s1[j])
		{
			j=j-1;
			cout<<"答错了，还需多加努力！"<<endl;
		}
		  }
		 }
		 
	return 0;
}
/*有打印功能的带括号算式*/
//int p(void)
//{
	
//}

int main(void)
{
	int n,n1;
	cout<<"是否有括号？（1有，0否）"<<endl;
    cin>>n1;
     
	if(n1==1)
	    {
		  cout<<"是否打印？（1存入文档，0否）"<<endl;
          cin>>n;
		  if(n==0)
		  {

			q();
		  
		  }
		  //if(n==1)
		//  {
		//	  p();
		  //
		 // }
	//	}
	
  //if(n1==0)
	//{
		//  cout<<"是否打印？（1存入文档，0否）"<<endl;
          //cin>>n;
		
		  //if(n==1)
		  //{
	       //b();
		  //}

		  //if(n==0)
		  //{ 
			//a();
		//  }
  //}
		
}
	liunianji();
return 0;
}