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

