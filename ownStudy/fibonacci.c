#include <stdio.h>

// Define structure Book
struct Book {
    char Book_Name[100];
    float Price;
    char Author_Name[100];
};

int main() {
    // Declare an array of Book structure to hold 10 records
    struct Book books[10];

    // Input data for 10 records of books
    for (int i = 0; i < 10; i++) {
        printf("Enter details for Book :\n");
        printf("Book Name: ");
        scanf("%s", books[i].Book_Name);
        printf("Price: ");
        scanf("%f", &books[i].Price);
        printf("Author Name: ");
        scanf("%s", books[i].Author_Name);
    }

    // Print names of authors whose books have a price greater than 1000
    printf("\nAuthors with books priced greater than 1000:\n");
    for (int i = 0; i < 10; i++) {
        if (books[i].Price > 1000) {
            printf("%s\n", books[i].Author_Name);
        }
    }

    return 0;
}
