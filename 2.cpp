//3.3.2016 tangyeye
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<fstream>
#include<ostream>
#include<string>
#include<stdlib.h>
using namespace std;
#define MAX N


/*�޴�ӡ���ܵ���������ʽ*/
int a(void)
{   
	srand((unsigned)time(NULL));
	int a,b,c,i,x;
	int N;
	cout<<"��������Ŀ��������"<<endl;
	cin>>i;
	cout<<"��������������ڵ���������"<<endl;
	cin>>N;
	cout<<"�Ƿ��г˳��ţ���1�ǣ�0��"<<endl;
	cin>>x;
	cout<<"��ӡ������������Ϊ�Ǹ������ҳ�������������"<<endl;
	if(x==0)
	{
       for(int j=0;j<i;j++)
	   {
		   a=rand()%MAX;
           b=rand()%MAX;
		  
		   c=rand()%2+1;

				    switch(c){
					   case 1: cout<<a<<"+"<<b<<endl;
	                   break;
					   
					   case 2: if(a>=b) {cout<<a<<"-"<<b<<endl;} else{cout<<b<<"-"<<a<<endl;};
					   break;
					}
	   
	   }}
	else
	{
		for(int j=0;j<i;j++)
		{
				a=rand()%MAX;
                b=rand()%MAX;
	           
	            c=rand()%4+1;
     
          
			   switch(c)
			   {
			   case 1: cout<<a<<"+"<<b<<endl;
	           break;

		       case 2:if(a>=b) {cout<<a<<"-"<<b<<endl;} else{cout<<b<<"-"<<a<<endl;}
		       break;

		       case 3: cout<<a<<"*"<<b<<endl;
		       break;

			   case 4:if(a%b==0) {cout<<a<<"/"<<b<<endl;}else{cout<<a<<"*"<<b<<endl;}
               break;

		       
			   }
		   }

		
 return 0;
	}

		
}


/*�д�ӡ���ܵ���������ʽ*/
int b(void)
{
srand((unsigned)time(NULL));
	int a,b,c,d,e,i,x;
	int N;

	cout<<"��������Ŀ��������"<<endl;
	cin>>i;
	cout<<"��������������ڵ���������"<<endl;
	cin>>N;
	cout<<"�Ƿ��г˳��ţ���1�ǣ�0��"<<endl;
	cin>>x;
	cout<<"��ӡ������������Ϊ�Ǹ������ҳ�������������"<<endl;
	ofstream fout("D:\\1.txt",ios::binary);
	if(!fout)
	{
		cerr<<"open wrong!"<<endl;
	
	}
	if(x==0)
	{
       for(int j=0;j<i;j++)
	   {
		   a=rand()%MAX;
           b=rand()%MAX;
		  
		   c=rand()%2+1;

				    switch(c){
					   case 1: fout<<a<<"+"<<b<<endl;
	                   break;
					   
					   case 2: if(a>=b) {fout<<a<<"-"<<b<<endl;} else{fout<<b<<"-"<<a<<endl;};
					   break;
					}
	   
	   }}
	else
	{
		for(int j=0;j<i;j++)
		{
				a=rand()%MAX;
                b=rand()%MAX;
	           
	            c=rand()%4+1;
     
          
			   switch(c)
			   {
			   case 1: fout<<a<<"+"<<b<<endl;
	           break;

		       case 2:if(a>=b) {fout<<a<<"-"<<b<<endl;} else{fout<<b<<"-"<<a<<endl;}
		       break;

		       case 3: fout<<a<<"*"<<b<<endl;
		       break;

			   case 4:if(a%b==0) {fout<<a<<"/"<<b<<endl;}else{fout<<a<<"*"<<b<<endl;}
               break;

		       
			   }
		   }

		
 return 0;
	}

}


/*�޴�ӡ���ܵĴ����ŵ���ʽ*/
int q(void)
{
	srand((unsigned)time(NULL));
	int i,x,a,b,c,d,n3,c2;
	string a2,a3,a4,a5,a6,a7,a8,a9,a10;
	char a1,b1[10],c1,d1[10];
	char p[10];
	char p1[10],p2[10];
	int N;
	cout<<"�����������Ŀ����3<=n<10��"<<endl;
    cin>>n3;
	cout<<"��������Ŀ��������"<<endl;
	cin>>i;
	cout<<"��������������ڵ���������"<<endl;
	cin>>N;
	cout<<"�Ƿ��г˳��ţ���1�ǣ�0��"<<endl;
	cin>>x;
	cout<<"��ӡ������������Ϊ�Ǹ������ҳ�������������"<<endl;
	
	if(x==0)
	{     c=rand()%2+1;
		   srand((unsigned)time(NULL));
		   switch(c)
		   {
		   case 1:a1='+';
		   break;

		   case 2:a1='-';
		   break;
		   }
		   
	 
	 if(n3==3)
	 {
		 srand((unsigned)time(NULL));
		 for(int j=0;j<i;j++)
		 {
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
		 cout<<a3<<endl;
		 }
	
	 }

	 if(n3==4)                                                //44444444444444444

	 {
	    srand((unsigned)time(NULL));

		 for(int j=0;j<i;j++)
		 {
			 {a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
		 cout<<a4<<endl;
		
		 }
		
	 }

	  if(n3==5)                                           //5555555555555555555
	 {
		   srand((unsigned)time(NULL));
		 for(int j=0;j<i;j++)
		 {
			 {
		     {
			 a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
			 
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;

           a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p2_+')';
		     break;

		     case 3:a5='('+p2_+a1+a4+')';
		     break;
		 }
		 cout<<a5<<endl;
		
		 }
		
	 }


	  if(n3==6)                               //666666666666666
	 {
		 for(int j=0;j<i;j++)
		 {
			 {
			 {
		     {
			 a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
			 
			 }
			  
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;

           a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p2_+')';
		     break;

		     case 3:a5='('+p2_+a1+a4+')';
		     break;
		 }
		 
		 }

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           
		  c1=rand()%3+1;
		  switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
			break;
		 }
		 cout<<a6<<endl;
	 }
	 
	  }

	   if(n3==7)                   //77777777777777777
	 {
		 for(int j=0;j<i;j++)
		 {
			 {
			 {
			 {
		     {
			 a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
			 
			 }
			  
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;

           a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p2_+')';
		     break;

		     case 3:a5='('+p2_+a1+a4+')';
		     break;
		 }
		 
		 }

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }
}

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
		 cout<<a7<<endl;
	 }
	   }
	    
	   
	   if(n3==8)               //8888888888888

	 {     

		 for(int j=0;j<i;j++)
		 {
			 {
			 {
			 {
			 {
		     {
			 a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
			 
			 }
			  
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;

           a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p2_+')';
		     break;

		     case 3:a5='('+p2_+a1+a4+')';
		     break;
		 }
		 
		 }

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }
}

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
}
		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a8=a7;
			 break;

			 case 2:a8='('+a7+a1+p_+')';
		     break;

			 case 3:a8='('+p1_+a1+a7+')';
		 }
		 cout<<a8<<endl;
	 }
	   }

		
	   
	   if(n3==9)                                           //9999999
	  {                             
		  for(int j=0;j<i;j++)
		  {
			  {
				  {
			 {
			 {
			 {
		     {
			 a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p2_+')';
		     break;

		     case 3:a3='('+p2_+a1+a2+')';
		     break;
		 }
			 }
	      
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
		   a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 3:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p2_+')';
		     break;

			 case 1:a4='('+p2_+a1+a3+')';
		     break;
		 }
			 
			 }
			  
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;

           a2='('+p_+a1+p1_+')';
		  c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p2_+')';
		     break;

		     case 3:a5='('+p2_+a1+a4+')';
		     break;
		 }
		 
		 }

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
         
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }
}

		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
        
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
}
		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a8=a7;
			 break;

			 case 2:a8='('+a7+a1+p_+')';
		     break;

			 case 3:a8='('+p1_+a1+a7+')';
		 }
			  }
		   srand((unsigned)time(NULL));

		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   itoa(a,p2,10);
	       string p2_=p2;

		   itoa(b,p,10);
	       string p_=p;
           itoa(d,p1,10);
	       string p1_=p1;
           a2='('+p_+a1+p1_+')';
           cout<<a2;
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a9=a8;
			 break;

			 case 2:a9='('+a8+a1+p_+')';
		     break;

			 case 3:a9='('+p1_+a1+a8+')';
		 }
		 cout<<a9<<endl;
		  }
	   }


	   
	
	}
	else
	{
		
		
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   c=rand()%4+1;
		   switch(c)
		   {
		   case 1:a1='+';
		   break;

		   case 2:a1='-';
		   break;

		   case 3:a1='*';
		   break;

		   case 4:a1='/';
		   break;
		   }
			
	 itoa(b,p,10);
	 string p_=p;
	 itoa(d,p1,10);
	 string p1_=p1;
	 a2='('+p_+a1+p1_+')';
	 cout<<a2;
	 if(n3==3)
	 {
         for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p_+')';
		     break;

			 case 3:a3='('+p1_+a1+a2+')';
				 break;
		 }}
		 cout<<a3<<endl;
	 
		 }

	 if(n3==4)
	 {
		   for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p_+')';
		     break;

			 case 3:a4='('+p1_+a1+a3+')';
				 break;
		 }}
		 cout<<a4<<endl;
		   }

	  if(n3==5)
	 {
		   for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p_+')';
		     break;

			 case 3:a5='('+p1_+a1+a4+')';
		 }}
		 cout<<a5<<endl;
	 
	  }

	  if(n3==6)
	 {
		   for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }}
		 cout<<a6<<endl;
		   }


	   if(n3==7)
	 {  
		 for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
		 
	 }
		 cout<<a7<<endl;
	   }
	    if(n3==8)
	 {
		   for(int j=0;j<=i;j++)
		 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a8=a7;
			 break;

			 case 2:a8='('+a7+a1+p_+')';
		     break;

			 case 3:a8='('+p1_+a1+a7+')';
		 }}
		 cout<<a8<<endl;
		   
		}

		 if(n3==9)
	 {
		   for(int j=0;j<=i;j++)
		 {

		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a9=a8;
			 break;

			 case 2:a9='('+a8+a1+p_+')';
		     break;

			 case 3:a9='('+p1_+a1+a8+')';
		 }
		   }
		 cout<<a9<<endl;
	 
	   }
	}	   

	return 0;	
}



/*�д�ӡ���ܵĴ�������ʽ*/
int p(void)
{
	srand((unsigned)time(NULL));
	int i,x,a,b,c,d,n3,c2;
	string a2,a3,a4,a5,a6,a7,a8,a9,a10;
	char a1,b1[10],c1,d1[10];
	char p[10];
	char p1[10];
	int N;
	cout<<"�����������Ŀ����3<=n<10��"<<endl;
    cin>>n3;
	cout<<"��������Ŀ��������"<<endl;
	cin>>i;
	cout<<"��������������ڵ���������"<<endl;
	cin>>N;
	cout<<"�Ƿ��г˳��ţ���1�ǣ�0��"<<endl;
	cin>>x;
	cout<<"��ӡ������������Ϊ�Ǹ������ҳ�������������"<<endl;
	ofstream fout("D:\\1.txt",ios::binary);
	if(!fout)
	{
		cerr<<"open wrong!"<<endl;
	
	}
	if(x==0)
	{

       for(int j=0;j<i;j++)
	   {
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   c=rand()%2+1;
		  
		   switch(c)
		   {
		   case 1:a1='+';
		   break;

		   case 2:a1='-';
		   break;
		   }
	
	 itoa(b,p,10);
	 string p_=p;
	 itoa(d,p1,10);
	 string p1_=p1;
	 a2='('+p_+a1+p1_+')';
	 fout<<a2;
	 if(n3=3)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p_+')';
		     break;

			 case 3:a3='('+p1_+a1+a2+')';
		 }
		 fout<<a3<<endl;
	 
	 }

	 if(n3=4)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p_+')';
		     break;

			 case 3:a4='('+p1_+a1+a3+')';
		 }
		 fout<<a4<<endl;
	 }


	  if(n3=5)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p_+')';
		     break;

			 case 3:a5='('+p1_+a1+a4+')';
		 }
		 fout<<a5<<endl;
	 }


	  if(n3=6)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }
		 fout<<a6<<endl;
	 }


	   if(n3=7)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
		 fout<<a7<<endl;
	 }

	    if(n3=8)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a8=a7;
			 break;

			 case 2:a8='('+a7+a1+p_+')';
		     break;

			 case 3:a8='('+p1_+a1+a7+')';
		 }
		 fout<<a8<<endl;
	 }

		 if(n3=9)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a9=a8;
			 break;

			 case 2:a9='('+a8+a1+p_+')';
		     break;

			 case 3:a9='('+p1_+a1+a8+')';
		 }
		 fout<<a9<<endl;
	 }


	   }
	
	}
	else
	{
		for(int j=0;j<i;j++)
		{
		   a=rand()%MAX;
           b=rand()%MAX;
		   d=rand()%MAX;
		   c=rand()%4+1;
		   switch(c)
		   {
		   case 1:a1='+';
		   break;

		   case 2:a1='-';
		   break;

		   case 3:a1='*';
		   break;

		   case 4:a1='/';
		   break;
		   }
			
	 itoa(b,p,10);
	 string p_=p;
	 itoa(d,p1,10);
	 string p1_=p1;
	 a2='('+p_+a1+p1_+')';
	 fout<<a2;
	 if(n3=3)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a3=a2;
			 break;

			 case 2:a3='('+a2+a1+p_+')';
		     break;

			 case 3:a3='('+p1_+a1+a2+')';
		 }
		 fout<<a3<<endl;
	 
	 }

	 if(n3=4)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a4=a3;
			 break;

			 case 2:a4='('+a3+a1+p_+')';
		     break;

			 case 3:a3='('+p1_+a1+a3+')';
		 }
		 fout<<a4<<endl;
	 }

	  if(n3=5)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a5=a4;
			 break;

			 case 2:a5='('+a4+a1+p_+')';
		     break;

			 case 3:a5='('+p1_+a1+a4+')';
		 }
		 fout<<a5<<endl;
	 }


	  if(n3=6)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a6=a5;
			 break;

			 case 2:a6='('+a5+a1+p_+')';
		     break;

			 case 3:a6='('+p1_+a1+a5+')';
		 }
		 fout<<a6<<endl;
	 }


	   if(n3=7)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a7=a6;
			 break;

			 case 2:a7='('+a6+a1+p_+')';
		     break;

			 case 3:a7='('+p1_+a1+a6+')';
		 }
		 fout<<a7<<endl;
	 }

	    if(n3=8)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a8=a7;
			 break;

			 case 2:a8='('+a7+a1+p_+')';
		     break;

			 case 3:a8='('+p1_+a1+a7+')';
		 }
		 fout<<a8<<endl;
	 }

		 if(n3=9)
	 {
		 c1=rand()%3+1;
		 switch(c1)
		 {
		     case 1:a9=a8;
			 break;

			 case 2:a9='('+a8+a1+p_+')';
		     break;

			 case 3:a9='('+p1_+a1+a8+')';
		 }
		 fout<<a9<<endl;
	 }
      }
       }
return 0;	


}



int main(void)
{
	int n,n1;
	cout<<"�Ƿ������ţ���1�У�0��"<<endl;
    cin>>n1;
     
	if(n1==1)
	    {
		  cout<<"�Ƿ��ӡ����1�����ĵ���0��"<<endl;
          cin>>n;
		  if(n==0)
		  {

			q();
		  
		  }
		  if(n==1)
		  {
			  p();
		  
		  }
		}
	
  if(n1==0)
	{
		  cout<<"�Ƿ��ӡ����1�����ĵ���0��"<<endl;
          cin>>n;
		
		  if(n==1)
		  {
	       b();
		  }

		  if(n==0)
		  { 
			a();
		  }
  }
		
}

