#include <stdio.h>
#include <math.h>

#define MAX_ITER 1000

// Örnek fonksiyon: f(x) = x^3 - x - 2
double f(double x) {
    return x * x * x - x - 2;
}
int main() {
    double a, b, c, fa, fb, fc, error;
    int iter = 0;
    printf("Regula Falsi Method to find root of equation f(x) = x^3 - x - 2\n");
    printf("Enter interval a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter error tolerance: ");
    scanf("%lf", &error);
    fa = f(a);
    fb = f(b);
    if (fa * fb > 0) {
        printf("No root in the given interval [%.4lf, %.4lf]\n", a, b);
        return 0;
    }
    printf("\nIteration\t a\t\t b\t\t c\t\t f(c)\n");
    do {
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);

        printf("%d\t\t%.6lf\t%.6lf\t%.6lf\t%.6lf\n", iter + 1, a, b, c, fc);

        if (fabs(fc) < error) {
            printf("\nRoot found at x = %.6lf\n", c);
            printf("After %d iterations.\n", iter + 1);
            return 0;
        }
        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }

        iter++;
    } while (iter < MAX_ITER);
    printf("\nRoot after %d iterations is approximately %.6lf\n", MAX_ITER, c);
    return 0;
}

