//these program generate error because no function has declaration similar to that of called     

	  #include <iostream>

        using namespace std;

        int Add(int X, int Y, int Z)     //Add(5, 6); argument count is 3 and we provide only 2

        {

            return X + Y;

        }

        double Add(double X, double Y, double Z)

        {

            return X + Y;

        }

        int main()

        {

            cout << Add(5, 6);         // error: no matching function for call to 'Add(int, int)

            cout << Add(5.5, 6.6);

            return 0;

        }