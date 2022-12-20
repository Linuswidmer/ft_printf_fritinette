#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

//int ft_printf(const char* arg, ...);

int main(int argc, char **argv)
{
  (void)argc;
  int int_test[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647}; 
  int u_int_test[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647, 4294967295}; 
  const char *str_test[] = {"hello", "", "\n", "\200 \0"};

  if(strncmp(argv[1], "INT_TEST", 8) == 0)
  {
    if (int_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        ft_printf("%i", int_test[atoi(argv[2])]); 
      else
        printf("%i", int_test[atoi(argv[2])]);
    }
  }
  else if(strncmp(argv[1], "U_INT_TEST", 10) == 0)
  {
    if (u_int_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        ft_printf("%i", u_int_test[atoi(argv[2])]); 
      else
        printf("%i", u_int_test[atoi(argv[2])]);
    }
  }
  else if(strncmp(argv[1], "STR_TEST", 8) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        ft_printf("%s", str_test[atoi(argv[2])]); 
      else
        printf("%s", str_test[atoi(argv[2])]);
    }
  }
}
