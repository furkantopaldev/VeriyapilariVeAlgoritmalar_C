#include <stdio.h>
#include <math.h>

// Fonksiyon tanýmý: f(x) = x^3 - 4x - 9
double f(double x) {
    return x*x*x - 4*x - 9;
}

int main() {
    double a, b, c, tol;
    int iter = 0;

    
    printf("Bisection Method for f(x) = x^3 - 4x - 9\n");

    // Aralýk ve tolerans deðerlerini girme
    printf("Enter lower limit a: ");
    scanf("%lf", &a);
    printf("Enter upper limit b: ");
    scanf("%lf", &b);
    printf("Enter tolerance: ");
    scanf("%lf", &tol);

    // Bisection Method
    if(f(a)*f(b) >= 0) {
        printf("Bisection method cannot be applied.\n");
        return 1;
    }

    printf("\nIter\t   a\t\t   b\t\t   c\t\tf(c)\n");
    printf("-----------------------------------------------------------\n");

    do {
        c = (a + b) / 2.0;
        printf("%3d\t%8.6f\t%8.6f\t%8.6f\t%8.6f\n", ++iter, a, b, c, f(c));

        if(f(c) == 0.0) break;
        else if(f(c)*f(a) < 0)
            b = c;
        else
            a = c;

    } while(fabs(f(c)) > tol);

    printf("\nApproximate root = %.6f, after %d iterations.\n", c, iter);

    return 0;
}
