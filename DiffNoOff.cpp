//When the compiler is unable to decide which function it should invoke first among the overloaded functions, this situation is known as function 
//overloading ambiguity. The compiler does not run the program if it shows ambiguity error. 
//: error: call of overloaded 'function(double)' is ambiguous
#include <iostream>

using namespace std;

int add(int a, int b)
{
    cout << a+b <<endl;
    return 0;
}

int add(int a, int b, int c)
{
    cout << a+b+c <<endl;
    return 0;
}

int main()
{
    
    add(20, 40);  

    add(40, 20, 30);  
}

//output : 60 90