#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    FILE *error_log = fopen("error_log.txt", "w");
    char line[100];

    if (input_file == NULL || error_log == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    while (fgets(line, 100, input_file) != NULL)
    {
        if (strstr(line, "error") != NULL)
        {
            fputs(line, error_log);
        }
    }

    fclose(input_file);
    fclose(error_log);

    FILE *error_log_read = fopen("error_log.txt", "r");
    if (error_log_read == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    while (fgets(line, 100, error_log_read) != NULL)
    {
        printf("%s", line);
    }

    fclose(error_log_read);

    return 0;
}
Q.2;
