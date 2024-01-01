#include<stdio.h>

#define MAX 100
  int n,i,j;
 double matrix[MAX][MAX+1];

void gauss_jordan()
{
    int i,j,k;
    double pivot, factor;
    for(i=0;i<n;i++)
    {
        pivot=matrix[i][i];
        for(j=i;j<=n;j++)
        {
            matrix[i][j]=matrix[i][j]/pivot;
        }
        for(k=0;k<n;k++)
        {
            if(k!=i)
            {
                factor=matrix[k][i];
                for(j=i;j<=n;j++)
                {
                    matrix[k][j]=matrix[k][j]-factor*matrix[i][j];
                }
            }
        }
    }
}

int main()
{
  
  
    scanf("%d",&n);

   

  

    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++){
            scanf("%lf",&matrix[i][j]);
        }
    }

    gauss_jordan();

      char ch='x';
    for(i=0;i<n;i++)
    {
     
        printf("%c %.2lf\n ",ch++,matrix[i][n]);


    }
     

}

/*

3
2 3 -1 1
4 1 2 2
3 2 -3 3

*/