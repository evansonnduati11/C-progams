// surface area and volume of a cylibder program
#include <stdio.h>
int main() {
    float radius,height,area,volume;
    float pi= 3.142;

    printf("height of cylinder \n");
    scanf("%f",& height);

    printf(" radius of cylinder \n");
    scanf("%f", &radius);

    volume=pi*radius* radius*height;
    printf("volume=%f \n",volume);

    area=2*pi*radius*radius+ 2*pi*radius*height;
    printf("area=%f \n", area);
    return 0;
}
