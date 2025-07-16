#include <stdio.h>
#include <math.h>


/*

// 3. math functions
int main() {

    float x = 3.14;

    // x = pow(x, 4);
    // x = sqrt(x);
    // x = round(x);
    // x = ceil(x);
    // x = floor(x);
    // x = abs(x);
    // x = sin(x);
    // x = cos(x);
    // x = tan(x);

    printf("%f", x);

    return 0;
}
    */

/*

// 4.circle calculator program

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    const double PI = 3.1415;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    // area = PI * radius * radius;
    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);

    printf("Area: %.2lf\n", area);
    printf("SurfaceArea: %.2lf\n", surfaceArea);
    return 0;
}

    */

    // 5. compound interest calculator

    int main() {

        // COMPOUND INTEREST CALCULATOR

        double principal = 0.0;
        double rate = 0.0;
        int years = 0;
        int timesCompounded = 0;
        double total = 0.0;

        printf("Compound Interest Calculator\n");

        printf("Enter the principal(P):");
        scanf("%lf", &principal);

        printf("Enter the interest rate %% (r): ");
        scanf("%lf", &rate);
        rate = rate / 100;

        printf("Enter the # of years(t): ");
        scanf("%d", &years);

        printf("Enter the # of times compounded per year (n): ");
        scanf("%d", &timesCompounded);

        total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

        printf("After %d years, the total will be $ %.2lf", years, total);

        return 0;
    }



