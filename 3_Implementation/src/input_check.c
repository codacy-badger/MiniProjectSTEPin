#include "conversion.h"
double value;
double* input_check(){

if (scanf("%lf", &value) == 1){
    return &value;
}
    
else{
    printf("\nYou have entered an invalid input\n");
    printf("\nPlease Try again\n");
    
    return NULL_PTR;
}

    
}