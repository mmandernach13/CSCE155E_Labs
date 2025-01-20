/*
 * Author: Mason Mandernach
 * For: CSCE 155E
 * On: 20/01/2025
 * Description: caclulate area of square from user inputs
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    printf("Enter side length of square: ");
    double side = 0;
    scanf("%lf", &side);

    if(side <= 0){
        printf("Invalid side length\n");
        exit(1);
    }

    double area = side * side;

    printf("Area of square is: %.2lf\n", area);

    return 0;
}