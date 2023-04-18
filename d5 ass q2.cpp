Here's an example C program that reads data from a binary file named "data.bin" and prints it to the console in a human-readable format:

arduino
Copy code
#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    int i;

    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }

    while (fread(buffer, sizeof(buffer), 1, fp) == 1) {
        for (i = 0; i < sizeof(buffer); i++) {
            printf("%02X ", buffer[i]);
        }
        printf("\n");
    }

    fclose(fp);

    return 0;
}
