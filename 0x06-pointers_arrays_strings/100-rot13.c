#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded string
 */
char *rot13(char *str)
{
  int x;
  char rot[52][2] = {{'A', 'N'},
                     {'B', 'O'},
                     {'C', 'P'},
                     {'D', 'Q'},
                     {'E', 'R'},
                     {'F', 'S'},
                     {'G', 'T'},
                     {'H', 'U'},
                     {'I', 'V'},
                     {'J', 'W'},
                     {'K', 'X'},
                     {'L', 'Y'},
                     {'M', 'Z'},
                     {'N', 'A'},
                     {'O', 'B'},
                     {'P', 'C'},
                     {'Q', 'D'},
                     {'R', 'E'},
                     {'S', 'F'},
                     {'T', 'G'},
                     {'U', 'H'},
                     {'V', 'I'},
                     {'W', 'J'},
                     {'X', 'K'},
                     {'Y', 'L'},
                     {'Z', 'M'},
                     {'a', 'n'},
                     {'b', 'o'},
                     {'c', 'p'},
                     {'d', 'q'},
                     {'e', 'r'},
                     {'f', 's'},
                     {'g', 't'},
                     {'h', 'u'},
                     {'i', 'v'},
                     {'j', 'w'},
                     {'k', 'x'},
                     {'l', 'y'},
                     {'m', 'z'},
                     {'n', 'a'},
                     {'o', 'b'},
                     {'p', 'c'},
                     {'q', 'd'},
                     {'r', 'e'},
                     {'s', 'f'},
                     {'t', 'g'},
                     {'u', 'h'},
                     {'v', 'i'},
                     {'w', 'j'},
                     {'x', 'k'},
                     {'y', 'l'},
                     {'z', 'm'}};

  x = 0;

  while (str[x])
  {
    int y;

    for (y = 0; y < 52; y++)
    {
      if (str[x] == rot[y][0])
      {
        str[x] = rot[y][1];
        break;
      }
    }

    x++;
  }
  return (str);
}
