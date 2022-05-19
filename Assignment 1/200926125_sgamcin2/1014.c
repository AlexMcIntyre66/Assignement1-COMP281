/* 
 * Student ID: 200926125
 * Student Name: Alex McIntyre 
 * Email: sgamcin2@student.liverpool.ac.uk 
 *  
 * User: sgamcin2
 *  
 * Problem ID: 1014 
 * RunID: 38965
 * Result: Accepted 
 */

#include <stdio.h>
#include <math.h>

int main(void){


    const float pi = 3.14;
    int r1 = 0;
    int r2 = 0;
    float sumOfAreas = 0;
    float sumOfCircum = 0;  

    scanf("%d", &r1);

    scanf("%d", &r2);

    if(r2-r1 == 1){
        sumOfAreas = pi*(pow(r1,2))+pi*(pow(r2,2));
        sumOfCircum = 2*pi*r1 + 2*pi*r2;
    } else{
        sumOfAreas = pi*(pow(r1,2))+pi*(pow(r2,2));
        sumOfCircum = 2*pi*r1 + 2*pi*r2;
        for(int a = (r2 -r1)-1; a > 0; a--){
            sumOfAreas += pi*(pow((r1 + a),2));
            sumOfCircum +=  2*pi*(r1 + a); 
        }
    }

    printf("%.3f\n", sumOfAreas);
    printf("%.3f\n", sumOfCircum);
    return 0;


} 