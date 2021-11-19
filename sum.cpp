#include<iostream>
using namespace std;

int main()
{

    int total = 0, i, j, sort1, sort2;

    //this For-Loop will loop three times, every time getting two new 
    //integer from the user

    for (int c = 0; c < 3; c++) {
        cout << "Enter two integers ( n n ): ";
        cin >> i;
        cin >> j;

   //This will compare if first number is bigger than the second one. If it 
   //is, then second number is the smallest
        if (i > j) {
            sort1 = j;
            sort2 = i;
        }
        else {
            sort1 = i;
            sort2 = j;
        }

        cout << "The numbers are: " << sort1 << " and " << sort2 << endl;

   //This statement will add into the variable total, the sum of both numbers entered before doing another loop around
        total += i + j;
    }

    cout << "The sum of all integers entered is: " << total << endl;

    system("pause");

    return 0;
}