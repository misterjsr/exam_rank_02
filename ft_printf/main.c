#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);

int main()
{
	printf("%s de %5d\n", "todo", -42);
	ft_printf("\n%s de %5d", "todo", -42);

	printf("\njaja%30.10s %.3s %.30s %20s %30.10d %30d %.10d %30.10d %5.0d %30.10x %30x %.10x %30.10x %5.0x\n", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030, 0, 30, 30 , 303030, -303030, 0);
	ft_printf("\n\njaja%30.10s %.3s %.30s %20s %30.10d %30d %.10d %30.10d %5.0d %30.10x %30x %.10x %30.10x %5.0x\n", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030, 0, 30, 30 , 303030, -303030, 0);

	
	printf("\n%6.30s\n", "jaime");
	ft_printf("\n%6.30s\n", "jaime");
}
