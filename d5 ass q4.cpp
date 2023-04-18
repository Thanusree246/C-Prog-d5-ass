#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char file_name[256];
    char search_string[256];
    printf("Enter file name: ");
    scanf("%s", file_name);
    printf("Enter search string: ");
    scanf("%s", search_string);

    
    FILE* file = fopen(file_name, "r");

    
    if (!file) {
        printf("Failed to open file\n");
        return 1;
    }

    
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        
        if (strstr(line, search_string)) {
            printf("%s", line);
        }
    }

    
    fclose(file);

    return 0;
}
