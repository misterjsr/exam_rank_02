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
        int i = -1, j = -1;

        while (argv[1][++i])
            if (search(argv[1][i], argv[1], i))
                write(1, &argv[1][i], 1);
        while (argv[2][++j])
            if (search(argv[2][j], argv[1], i) && search(argv[2][j], argv[2], j))
                write(1, &argv[2][j], 1);
    }
  write(1, "\n", 1);
  return (0);
}