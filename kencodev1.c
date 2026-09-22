#include <stdio.h>
//1. ödev.
void Numeric2Char(char A[], int numeric);
int Char2Numeric(char A[]);
int main() {
    int choice;

    
    printf("Choose an option:\n");
    printf("To convert integer to char, press 1.\n");
    printf("To convert char to integer, press 2.\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int numeric_val;
        char char_array[9];

        printf("Enter the numerical value with 8 digits: ");
        scanf("%d", &numeric_val);

        if (numeric_val < 10000000 || numeric_val > 99999999) {
            printf("Please enter exactly 8 digits.\n");
            return 1;
        }

        Numeric2Char(char_array, numeric_val);

        printf("The character representation: %s\n", char_array);

    } else if (choice == 2) {
        int numeric_result;
        char char_array[9];

        printf("Enter the string representation with 8 characters: ");
        scanf("%8s", char_array); 

        numeric_result = Char2Numeric(char_array);

        printf("The integer representation: %d\n", numeric_result);

    } else {
        printf("Invalid option.\n");
    }

    return 0;
}


void Numeric2Char(char A[], int numeric) {
    A[8] = '\0'; 
    int i;
    for (i = 7; i >= 0; i--) {
        int digit = numeric % 10;
        if (digit >= 1 && digit <= 9) {
            A[i] = 'A' + (digit - 1); 
        } else if (digit == 0) {
            A[i] = 'J';
        } else {
            A[i] = '?'; 
        }
        numeric /= 10;
    }
}




int Char2Numeric(char A[]) {
    int number = 0;
    int i;

    for (i = 0; i < 8; i++) {
        number = number * 10 + (A[i] - '0');
    }

    return number;
}



//2. ödev.
