/**
 * What output do the following calls of `printf` produce?
 * (a) printf("%6d, %4d", 86, 1040);  -> `    86, 1040`
 * (b) printf("%12.5e", 30.253);      -> ` 3.02530e+01`
 * (c) printf("%.4f", 83.162);        -> `83.1620`
 * (d) printf("%-6.2g", .0000009979); -> `1e-06 ` * Attention here, is not `9.98e-07`
 */

#include <stdio.h>

int main(void) {
  printf("|%6d, %4d|\n", 86, 1040); 
  printf("|%12.5e|\n", 30.253);
  printf("|%.4f|\n", 83.162);
  printf("|%-6.2g|\n", .0000009979);

  printf("|%-6.2f|\n", .0000009979);
  printf("|%-6.2e|\n", .0000009979);

  return 0;
}
