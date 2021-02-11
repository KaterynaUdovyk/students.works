#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>
double sigmoid (double x) {
    return 1/(1+exp(-x));

}
double sigmoid_derivative (double x) {
    return exp(x)/((exp(x)+1)*(exp(x)+1));

}
double x;

int main() {
    printf ("x=");
    scanf("%lf", &x);
    double result = sigmoid(x);
    double result_2 = sigmoid_derivative(x);
    printf("%Lf\n", result);
    printf("%Lf\n", result_2);
    return 0;
}

