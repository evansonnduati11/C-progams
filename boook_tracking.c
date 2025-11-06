/*
EVANSON NDUATI 
CT101/G/26516/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100

int main() {
    FILE *file_pointer;
    char book_title[MAX_TITLE_LENGTH];

    // i. Open the file in append mode ("a")
    // If the file does not exist, it will be created.
    file_pointer = fopen("borrowed_books.txt", "a");

    if (file_pointer == NULL) {
        printf("🚨 Error: Could not open borrowed_books.txt for appending.\n");
        // Exit the program if the file can't be opened
        return 1;
    }

    // Get the book title from the librarian
    printf("➡️ Enter the book title to record: ");
    // Use fgets for safer input, reading up to MAX_TITLE_LENGTH - 1 characters
    if (fgets(book_title, MAX_TITLE_LENGTH, stdin) == NULL) {
        printf("🚨 Error: Failed to read input.\n");
        fclose(file_pointer);
        return 1;
    }

    // Remove the trailing newline character that fgets might include
    book_title[strcspn(book_title, "\n")] = 0;

    // Write the title to the file followed by a newline
    fprintf(file_pointer, "%s\n", book_title);

    // Close the file
    fclose(file_pointer);

    // ii. Display a confirmation message
    printf("\n✅ Success: Title '%s' successfully stored in borrowed_books.txt.\n", book_title);

    return 0;
}