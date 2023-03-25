#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *merged_file;
    char filename1[50], filename2[50], merged_filename[50];
    char c;

    printf("Enter the name of the first file: ");
    scanf("%s", filename1);

    printf("Enter the name of the second file: ");
    scanf("%s", filename2);

    printf("Enter the name of the merged file: ");
    scanf("%s", merged_filename);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    merged_file = fopen(merged_filename, "w");

    if (file1 == NULL || file2 == NULL || merged_file == NULL) {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    while ((c = fgetc(file1)) != EOF) {
        fputc(c, merged_file);
    }

    while ((c = fgetc(file2)) != EOF) {
        fputc(c, merged_file);
    }

    printf("Merged file created successfully.\n");

    fclose(file1);
    fclose(file2);
    fclose(merged_file);

    return 0;
}
//output:
Enter the name of the first file: file1.txt
Enter the name of the second file: file2.txt
Enter the name of the merged file: merged_file.txt
Merged file created successfully.//

