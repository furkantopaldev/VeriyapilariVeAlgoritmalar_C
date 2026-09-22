#include <stdio.h>
#include <math.h>

// f(x) fonksiyonu
double f(double x) {
    return x*x*x - 4*x - 9;
}

int main() {
    double a, b, c, fa, fb, fc, tol;
    int iter = 0;

    printf("Bisection Method for f(x) = x^3 - 4x - 9\n");
    printf("En Kucuk Deger Gir a: ");
    scanf("%lf", &a);
    printf("En Buyuk Deger Gir b: ");
    scanf("%lf", &b);
    printf("Tolerans noktasýný gir: ");
    scanf("%lf", &tol);

    fa = f(a);
    fb = f(b);

    if (fa * fb > 0) {
        printf("Ters Deðerler yani ikiside pozitif yada ikiside negatif.\n");
        return 1;
    }

    printf("\nIter |    a      |    b      |    c      |   f(c)\n");
    printf("----------------------------------------------------\n");

    do {
        c = (a + b) / 2.0;
        fc = f(c);

        printf("%3d  | %8.6lf | %8.6lf | %8.6lf | %8.6lf\n", ++iter, a, b, c, fc);

        if (fabs(fc) < tol) break;

        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }

    } while (fabs(b - a) >= tol);

    printf("\nYaklasik Kok= %.3lf sonrasindaki %d iterasyonu.\n", c, iter);

    return 0;
}

