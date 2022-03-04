#include <math.h>
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
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
