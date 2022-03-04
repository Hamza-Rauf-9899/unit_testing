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
