//program to demonstrate the the concept of function overloading

#include<iostream>
using namespace std;

class Demo
{
  public:
        int add(int no1,int no2)
		{
		  return no1+no2;
		}
		int add(int no1,int no2,int no3)
		{
		  return no1+no2+no3;
		}
};

int main()
{
 Demo *p = NULL;
 p = new Demo;
 int iRet = 0;
 
 iRet = p->add(10,20);
 cout<<"result of first function \n"<<iRet;
 
 iRet = p->add(10,20,30);
 cout<<"\nresult of second function \n"<<iRet;
return 0;
}

/*
output 
result of first function
30
result of second function
60
*/