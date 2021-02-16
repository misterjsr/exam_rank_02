# include "get_next_line.h"

int main()
{
    int a;
    char *line;

    line = NULL;
    while((a = get_next_line(&line)) > 0)
    {
        printf("%s\n", line);
        free(line);
        line = NULL;
    }
    printf("%s", line);
    free(line);
    line = NULL;
}
