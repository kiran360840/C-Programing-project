#include <stdio.h>

int main() {
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;

    printf("ENTER YOUR EVERY SUBJECT MARKS\n");
    printf("Enter your FES marks:-\n");
    scanf("%f", &a);
    b = a / 50 * 100;
    printf("Enter your ENGLISH marks:-\n");
    scanf("%f", &c);
    d = c / 75 * 100;
    printf("Enter your NEPALI marks:-\n");
    scanf("%f", &e);
    f = e / 75 * 100;
    printf("Enter your MATHS marks:-\n");
    scanf("%f", &g);
    h = g / 75 * 100;
    printf("Enter your SCIENCE marks:-\n");
    scanf("%f", &i);
    j = i / 75 * 100;
    printf("Enter your OPT marks:-\n");
    scanf("%f", &k);
    l = k / 75 * 100;
    printf("Enter your FCA marks:-\n");
    scanf("%f", &m);
    n = m / 50 * 100;
    printf("Enter your C marks:-\n");
    scanf("%f", &o);
    p = o / 50 * 100;
    printf("Enter your WE marks:-\n");
    scanf("%f", &p);
    q = p / 50 * 100;
    r = a + b + c + d + e + f + g + h + i;
    printf("TOTAL MARKS OF ALL SUBJECT: %f\n", r);
    w = b + d + f + h + j + l + n + p + q;
    z = w / 575 * 100;
    printf("PERCENTAGE OF YOUR ALL SUBJECT: %f\n", z);
    printf("ENTER YOUR PERCENTAGE:\n");
    scanf("%f", &x);
    y = (l / 100) * 4;
    printf("YOUR GPA:\n %.2f", y);
    
    return 0;
}