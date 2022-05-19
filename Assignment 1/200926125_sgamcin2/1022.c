/* 
 * Student ID: 200926125
 * Student Name: Alex McIntyre 
 * Email: sgamcin2@student.liverpool.ac.uk 
 *  
 * User: sgamcin2
 *  
 * Problem ID: 1022
 * RunID: 44626
 * Result: Accepted 
 */

#include <stdio.h>

int main(){
    char input[1000];
    int length = 0;
    int engChars = 0;
    int digits = 0;
    int spaces = 0;
    int otherChars = 0;

    // Accept the multi word input (needs to be multi word)
    scanf("%[^\n]", &input);

    //Work out length of the string by using the null identifyer
    while(input[length]!='\0'){
        length++;
    }

    //Loop through each letter, depending on the ASCII value, add 1 to the required int
    for(int x = 0; x < length; x++){
        switch (input[x]){
            case 65 ... 90:
                engChars ++;
                break;
            case 97 ... 122:
                engChars ++;
                break;
            case 32:
                spaces ++;
                break; 
            case 48 ... 57:
                digits ++;
                break;
            default:
                otherChars ++;
                break;
        }
    }
    printf("%d %d %d %d", engChars, digits, spaces, otherChars);

    return 0;
}