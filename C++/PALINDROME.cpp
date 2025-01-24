#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    // Check characters from both ends towards the center
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It's a palindrome
}

int main() {
    char input[100]; // Assuming maximum length of input is 99 characters

    printf("Enter a string: ");
    scanf("%99s", input); // Read input string, limit to 99 characters

    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
