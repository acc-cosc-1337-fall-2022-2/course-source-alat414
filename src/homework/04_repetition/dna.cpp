
#include<dna.h>
#include<iostream>

using std::cout;
using std::cin;

/* write the function code for the factorial and gcd functions using 
 a loop of your choice.  Do not use a recursive solution to solve this problem

 int factorial(num)
   Loop while num > 0
      sum the product of num x num
      decrement num by 1
   return sum
int gcd(num1, num2)
   loop until num1 == num2
      if num1 < num2
         swap num1 and num2
      if num1 > num2
         subtract num2 from num1

   return num1
*/
int factorial (int num)
{
    int sum = 1;

    while (num > 0)

    {   
        sum *= num;
            num--;
    }

    return sum;

}

int gcf (int num1, int num2)
{
    cout << "Enter two numbers:";
    cin >> num1;
    cin >> num2;

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else 
        {
            num2 -= num1;
        }
    }
    cout << "The greatest common factor is:" << num1;
    return 0;
}
