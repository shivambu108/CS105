#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    file = fopen("demfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    
    }

    
    fgets(line, 5, file);
    printf("%s", line);
    

    fclose(file);

    return 0;
}
