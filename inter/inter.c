#include <unistd.h>

int search(char c, char *str, int j)
{
    int i = -1;
    while (++i < j)
      if (str[i] == c)
         return(0);
    return(1);
}

int main(int argc, char **argv) 
{
    if (argc == 3)
    {
        int i = -1, j;
        while (argv[1][++i] && (j = -1))
            if (search(argv[1][i], argv[1], i))
                while (argv[2][++j])
                    if (argv[2][j] == argv[1][i] && write(1, &argv[1][i], 1))
                break;
    }
    write(1, "\n", 1);
    return (0);
}