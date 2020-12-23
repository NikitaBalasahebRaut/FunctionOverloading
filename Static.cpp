//program for function overloading using static memory allocation

#include<iostream>
using namespace std;

class Demo
{
 public:
     int add(int no1,int no2)  //internally add@2ii
	 {
	   return no1+no2;
	 }
	 float add(float no1,float no2)
	 {
	   return no1+no2;
	 }
};

int main()
{
  Demo obj;
  int iRet = 0;
  float fRet = 0.0f;
  
  iRet = obj.add(11,21);
  fRet = obj.add(11.0f,21.0f);
  
  cout<<iRet<<"\n";
  cout<<fRet;
  
  return 0;
}
/*
output 
32
32
*/