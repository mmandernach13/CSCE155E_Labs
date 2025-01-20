/*
 * Author: Mason Mandernach
 * For: CSCE 155E
 * On: 20/01/2025
 * Description: data type example
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    if(argc != 3){
        printf("input correct number of arguments\n");
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int inaccurate_avg = (a+b)/2;
    double real_avg = ((a+b)*1.0)/2;

    printf("int avg= %d\n", inaccurate_avg);
    printf("real avg= %.2lf\n", real_avg);

    return 0;
}