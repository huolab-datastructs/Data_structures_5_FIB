#include "FIB.H"
int fibonacci(int n)
/*   fibonacci: recursive version

 
Pre:   The parameter n is a nonnegative integer.
Post: The function returns the nth Fibonacci number.
 */

{
   if (n <= 0)  return 0;
   else if (n == 1)  return 1;
   else              return fibonacci(n - 1) + fibonacci(n - 2);
}
