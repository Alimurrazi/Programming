#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define MAX 102
int around(int mat[][MAX], int n, int m)
{
  return mat[n-1][m-1] + mat[n-1][m] + mat[n-1][m+1]
    + mat[n][m-1] + mat[n][m+1]
    + mat[n+1][m-1] + mat[n+1][m] + mat[n+1][m+1];
}
int main(int argc, char *argv[])
{
#ifndef ONLINE_JUDGE
  char in[256];
  char out[256];
  strcpy(in, argv[0]);
  strcat(in, ".in");
  strcpy(out, argv[0]);
  strcat(out, ".out");
  close(0);
  open(in, O_RDONLY);
  close(1);
  open(out, O_WRONLY | O_CREAT, 0600);
#endif

  int mat[MAX][MAX];
  int n, m, i, j, f = 1;
  char c;
  for (scanf("%d %d", &n, &m); n != 0 && m != 0; scanf("%d %d", &n, &m)) {
    if (f != 1)
      putchar('/n');
    bzero(mat, MAX*MAX*sizeof(int));
    c = getchar();
    for (i = 1; i <= n; ++i) {
      for (j = 1; j <= m; ++j) {
        c = getchar();
        if (c == '*') mat[i][j] = 1;
        else if (c == '.') mat[i][j] = 0;
      }
      c = getchar();
    }
    printf("Field #%d:/n", f++);
    for (i = 1; i <= n; ++i) {
      for (j= 1; j <= m; ++j) {
        if (mat[i][j] == 1) putchar('*');
        else printf("%d", around(mat, i, j));
      }
      putchar('/n');
    }
  }

  return 0;
}

