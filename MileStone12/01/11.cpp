#include<stdio.h>

int main()
{
 int i,j,m,n;
 float a[10][10], sum=0.0, avg, transpose[10][10];
 int sumR, sumC;

 printf("Enter row and column size:\n");
 scanf("%d%d", &m, &n);

 printf("1. input elements into matrix of size  :\n");
 for(i=0;i< m;i++){
  for(j=0;j< n;j++){
   printf("a[%d][%d]=",i,j);
   scanf("%f", &a[i][j]);
  }
 }
 printf("2. display elements of matrix of size :\n");
 for(i=0;i< m;i++) {
  for(j=0;j< n;j++){
   printf("%f\t",a[i][j]);
   sum = sum + a[i][j];
  }
  printf("3. Sum of all elements of matrix of size = %f\n", sum);
  printf("\n");
 }
 for (i = 0; i < m; i++)
    {
        sumR = 0;
        for (j = 0; j < n; j++)
        {
            sumR += a[i][j];
        }
        printf("4. display row-wise sum of matrix of size %d= %d\n", i + 1, sumR);
    }
for (i = 0; i < n; i++)
    {
        sumC = 0;
        for (j = 0; j < m; j++)
        {
            sumC += a[j][i];
        }
        printf("5. display column-wise sum of matrix of size %d = %d\n", i + 1, sumC);
    }
    printf("\n");
for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = a[i][j];
}
  printf("6. create transpose of matrix B of size :\n");
}
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++){
      printf("%d\t", transpose[i][j]);
    printf("\n");
  }
}
return 0;
}

