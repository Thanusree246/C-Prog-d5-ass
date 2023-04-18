#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // Open input file for reading
    FILE* input_file = fopen("data.txt", "r");

    // Check if file was opened successfully
    if (!input_file) {
        printf("Failed to open input file\n");
        return 1;
    }

    
    int letter_counts[26] = {0};

    
    int c;
    while ((c = fgetc(input_file)) != EOF) {
        
        c = toupper(c);

        
        if (isalpha(c)) {
            
            letter_counts[c - 'A']++;
        }
    }

    
    fclose(input_file);

    
    FILE* output_file = fopen("statistics.txt", "w");

    
    if (!output_file) {
        printf("Failed to open output file\n");
        return 1;
    }

    
    for (int i = 0; i < 26; i++) {
        fprintf(output_file, "%c: %d\n", 'A' + i, letter_counts[i]);
    }

    
    fclose(output_file);

    return 0;
}
