/*
 * Author: Mason Mandernach
 * For: CSCE 155E
 * On: 20/01/2025
 * Description: calculate area of triangle from user input
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    printf("Enter height of triangle: ");
    double height = 0;
    scanf("%lf", &height);

    if(height <= 0){
        printf("Invalid height\n");
        exit(1);
    }

    printf("Enter width of triangle: ");
    double width = 0;
    scanf("%lf", &width);

    if(width <= 0){
        printf("Invalid width\n");
        exit(1);
    }

    double area = 0.5*height*width;

    printf("Area of square is: %.2lf\n", area);
    
    return 0;
}