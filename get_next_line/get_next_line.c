# include "get_next_line.h"

int get_next_line(char **line)
{
    char    buffer[512];
    int     lectura;
    int     i;

    if (((i = 0) && read(0, &buffer[i], 0) < 0) || (!line))
        return (-1);
    while ((lectura = read(0, &buffer[i], 1)) > 0 && buffer[i] != '\n')
        i++;
    buffer[i] = '\0';
    if (lectura != -1 && (*line = malloc(i + sizeof(char))) && (i = -1))
    {
        while (buffer[++i])
            (*line)[i] = buffer[i];
        (*line)[i] = '\0';
    }
    return (lectura > 0 ? 1 : lectura);
}
