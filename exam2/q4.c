#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char X[1000],Y[1000];


void lcs(char X[], char Y[], int m, int n)
{

    int a[m + 1][n + 1];
 
    int len = 0;
 
    int r, c;
 
    for (int i = 0; i <= m; i++) 
    {
        for (int j = 0; j <= n; j++) 
        {
            if (i == 0 || j == 0)
                a[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) 
            {
                a[i][j] = a[i - 1][j - 1] + 1;
                if (len < a[i][j]) {
                    len = a[i][j];
                    r = i;
                    c = j;
                }
            }
            else
                a[i][j] = 0;
        }
    }
 
 
    char* result = (char*)malloc((len + 1) * sizeof(char));
 

    while (a[r][c] != 0) 
    {
        result[--len] = X[r- 1]; 
        r--;
        c--;
    }
    printf("%s",result);
}

int main()
{
    int n,m,i;
    scanf("%d",&n);
        scanf("%s",&X[0]);
    scanf("%d",&m);
        scanf("%s",&Y[0]);
    char T[1000];int t;
    if(m>n)
    {
        strcpy(T,X);
        strcpy(X,Y);
        strcpy(Y,T);
        t=n;n=m;m=t;
    }
    lcs(X,Y,m,n);
    return 0;
}