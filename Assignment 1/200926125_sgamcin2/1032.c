/* 
 * Student ID: 200926125
 * Student Name: Alex McIntyre 
 * Email: sgamcin2@student.liverpool.ac.uk 
 *  
 * User: sgamcin2
 *  
 * Problem ID: 1032
 * RunID: 44636
 * Result: Accepted 
 */

#include <stdio.h>

int calcLength();

int main(){
    char input[50];
    char subStr1[50];
    char subStr2[50];
    int subStr1Count = 0;
    int subStr2Count = 0;


    scanf("%[^\n]\n%[^\n]\n%[^\n]", &input, &subStr1, &subStr2);


    //Calculate the length of each string input, this will be used to scan through later
    int lengthInput = calcLength(input);
    int lengthSubStr1 = calcLength(subStr1);
    int lengthSubStr2 = calcLength(subStr2);
    int x=0, y=0;


    //Scan through both the first substring and the input, when the characters are the same, check both of the next characters, 
    //if not, check the next character in the input against hte first in the substring
    while (input[x] != '\0' && subStr1 [y] != '\0'){
        if(subStr1[y] != input[x]){
            x++;
            y = 0;
        }
        else {
            x++;
            y++;
        }
        if(subStr1[y] == '\0'){
            subStr1Count++;
            y=0;
        }
    }

    //Reset variables
    x=0;
    y=0;

    //Repeat with the 2nd substring
    while (input[x] != '\0' && subStr2 [y] != '\0'){
        if(subStr2[y] != input[x]){
            x++;
            y = 0;
        }
        else {
            x++;
            y++;
        }
        if(subStr2[y] == '\0'){
            subStr2Count++;
            y=0;
        }
    }

    printf("%d %d", subStr1Count, subStr2Count);
    return 0;
}



//Function for calculating Length
int calcLength(char input[50]){
    int length = 0;

    while(input[length]!='\0'){
        length++;
    }

    return length;
}
