#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    FILE* input_file = fopen("input.txt", "r");

  
    FILE* output_file = fopen("output.txt", "w");

    
    if (!input_file || !output_file) {
        printf("Failed to open file\n");
        return 1;
    }

    
    char line[256];
    while (
       fgets(line, sizeof(line), input_file)) {
        
        while (replacement) {
            strncpy(replacement, "blue", strlen("blue"));
            replacement = strstr(line, "red");
        }

       
        fputs(line, output_file);
    }

   
    fclose(input_file);
    fclose(output_file);

    return 0;
}
