#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(int argc, char **argv)
{
  (void)argc;
  int int_test[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647}; 
  unsigned int u_int_test[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647, 4294967295}; 
  const char *str_test[] = {"hello", "", "\n", "\200 \0", "this is a bit longer string", "\n\n\n\n", "hello world again"};
  int char_test[] = {0, 22, 11, 128, 127, 'x', '9', 256, '\200'};
  int hex_test_low[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647};
  int hex_test_upper[] = {-2147483648, -12345, -9, -0, 0, 4, 238462, 2147483647};
  const char *print_test[] = {"print this sentence", "how bout some %%%%%%", "", "\n\n", "\200 hello"};

  void *ptr1;
  // int i;

  ptr1 = NULL;
  // i = 42; doesnt work as memory is assigned differently each time this is called
  void *pointer_test[] = {ptr1};

  if(strncmp(argv[1], "INT_TEST", 8) == 0)
  {
    if (int_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%i", int_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%i", int_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "U_INT_TEST", 10) == 0)
  {
    if (u_int_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%u", u_int_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%u", u_int_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "STR_TEST", 8) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%s", str_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%s", str_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "CHAR_TEST", 9) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%c", char_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%c", char_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "HEX_TEST_LOW", 12) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%x", hex_test_low[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%x", hex_test_low[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "HEX_TEST_UPPER", 14) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%X", hex_test_upper[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%X", hex_test_upper[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "PRINT_TEST", 10) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf(print_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf(print_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "POINTER_TEST", 12) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("%p", pointer_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("%p", pointer_test[atoi(argv[2])]));
    }
  }
  else if(strncmp(argv[1], "MIXED_TEST", 10) == 0)
  {
    if (str_test[atoi(argv[2])])
    {
      if(strncmp(argv[3], "_FT", 3) == 0)
        printf("\n%i", ft_printf("some text\n%i%u%c%x%X%p%s", int_test[atoi(argv[2])], u_int_test[atoi(argv[2])], char_test[atoi(argv[2])], hex_test_low[atoi(argv[2])], hex_test_upper[atoi(argv[2])], pointer_test[atoi(argv[2])], str_test[atoi(argv[2])])); 
      else
        printf("\n%i", printf("some text\n%i%u%c%x%X%p%s", int_test[atoi(argv[2])], u_int_test[atoi(argv[2])], char_test[atoi(argv[2])], hex_test_low[atoi(argv[2])], hex_test_upper[atoi(argv[2])], pointer_test[atoi(argv[2])], str_test[atoi(argv[2])]));
    }
  }
}
