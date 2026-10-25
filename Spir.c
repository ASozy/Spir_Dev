/* Матрицу заполнить последовательно идущими числами по спирали:
 1  2  3  4
12 13 14 15
11 16 15  6
10  9  8  7
*/

#include <stdio.h>   
#include <stdlib.h>  

void NextXY(int *x, int *y, int *v, int **A);

int main()
{
    int nx, ny, **A, i, smax, x, y, s, v[] = {1,0};
    
    printf("Col count: "); 
	scanf("%d", &nx);
    printf("Row count: "); 
	scanf("%d", &ny);

    A = (int**)malloc((nx+2)*sizeof(int*)); 
    for( x = 0; x < nx+2; x++ )
        A[x] = (int*)malloc((ny+2)*sizeof(int)); 

    for( x = 0; x < nx+2; x++)
        for( y = 0; y < ny+2; y++ )
            *(*(A+x)+y) = (x == 0 || x == nx+1 || y == 0 || y == ny+1 ? 1 : 0);
	
    for( s = 1, x = 1, y = 1; s <= nx*ny; NextXY(&x, &y, v, A), s++ ) 
        *(*(A+x)+y) = s;
	
    for( y = 1; y < ny+1; y++ )
    {
        for( x = 1; x < nx+1; x++ )
            printf("%d\t", *(*(A+x)+y));
        printf("\n");
    };
    
    return 0;
}

void NextXY(int *x, int *y, int *v, int **A)
{   
    int w;
    if(*(*(A+(*x+v[0]))+(*y+v[1])) != 0)
    {
        w = v[1];
        v[1] = v[0];
        v[0] = -w;
    }
    *x += v[0];
    *y += v[1];
}




