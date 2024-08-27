#include <stdio.h>
#include <stdlib.h>

int arr_2d[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

int main()
{

    for ( unsigned int i = 0; i < 3; ++i )
    {
        for ( unsigned int j = 0; j < 4; ++j )
        {
            printf("%d ", arr_2d[i][j] );
        }

        putchar('\n');
    }

    return 0;
}
