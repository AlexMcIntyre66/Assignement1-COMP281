/* 
 * Student ID: 200926125
 * Student Name: Alex McIntyre 
 * Email: sgamcin2@student.liverpool.ac.uk 
 *  
 * User: sgamcin2
 *  
 * Problem ID: 1018
 * RunID: 44600
 * Result: Accepted 
 */

#include <stdio.h>

// Declaring the recursive function we'll use later
void reverseWords();

int main(){
    // Call the recursave function so we don't use main to recurse
    reverseWords();
    return 0;
}

void reverseWords() {
    char currChar;

    //Take each character seperately
    scanf("%c", &currChar);

    //While the character isn't null print the current one and recursevely call the next character
    if (currChar != '\0'){
        reverseWords();
        printf("%c", currChar);
    }
}