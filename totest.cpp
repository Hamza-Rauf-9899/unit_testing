#include <math.h>
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

int Factorial(int n)    
{    
    if(n<0){    
        return(-1);} /*Wrong value*/      
    if(n==0){    
        return(1);}  /*Terminating condition*/    
    else    
        {return(n*Factorial(n-1));}    
}

bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;

  // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;

  // Now, we have that n is odd and n >= 3.

  // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the square root of n
    if (i > n/i) break;

    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }

  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
}

int addition(int a,int b) {
    return a+b;   
}

bool equal(int a,int b){
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}
bool greater(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}
