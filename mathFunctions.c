#include <stdio.h>
#include <math.h>

double exp(double p){
    double e = 2.71828182818281828;
    double result = pow(e, p);
    return result;
}
double log(double p){
    p = printf("Enter a number to log with base 10 > ");
    if(p > 0){
        double result = log10(p);
        return result;
    }
    else{_exception("You cannot log a number <= 0! \n");}
}

double loge(double x){
    x = printf("Please enter a number to log with base e > ");
    double e = 2.71828182818281828;
    if(x > 0){
        double result = log(x) / log(e);
        return result;
    }
    else{_exception("You cannot log a number <= 0! \n");}
}
int main(){
    int po;
    printf("Enter a number to use base e with: ");
    scanf("%d", &po);
    
    if (po > 0){
        double result = exp(po);
        printf("Result = %lf\n", result);
    }
    else if (po == 0){
        printf("You'll get %lf\n", exp(0));
    }
    else if (po <= -1 && po >= -101){
        printf("The value is %lf\n", exp(po));
    }
    else{
        printf("Too small of a value to be feasible.\n");
    }

    return 0;
}
