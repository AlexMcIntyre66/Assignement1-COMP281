/* 
 * Student ID: 200926125
 * Student Name: Alex McIntyre 
 * Email: sgamcin2@student.liverpool.ac.uk 
 *  
 * User: sgamcin2
 *  
 * Problem ID: 1030
 * RunID: 38992
 * Result: Accepted 
 */


#include <stdio.h>
#include <math.h>

int main(void){

    float numerator = 0;
    float denominator = 0;
    int dec = 0;
    double answer = 0;
    int output = 0;


    scanf("%f", &numerator);
    scanf("%f", &denominator);
    scanf("%d", &dec);

    answer = (numerator/denominator)*(pow(10, dec));

    output = fmod(answer,10);

    printf("%d\n", output);

    return 0;
}