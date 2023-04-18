#include <stdio.h>
#include <string.h>

int main() {
    
    FILE* input_file = fopen("input.txt", "r");

   
    FILE* error_log_file = fopen("error_log.txt", "w");

    
    char line[256];
    while (fgets(line, sizeof(line), input_file)) {
        
        if (strstr(line, "error")) {
            
            fputs(line, error_log_file);
        }
    }

   
    fclose(input_file);
    fclose(error_log_file);

    
    error_log_file = fopen("error_log.txt", "r");

    
    while (fgets(line, sizeof(line), error_log_file)) {
        printf("%s", line);
    }

   
    fclose(error_log_file);

    return 0;
}
