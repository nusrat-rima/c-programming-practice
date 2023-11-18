// Check whether a matrix is an identity matrix or not
#include <stdio.h>

int isIdentityMatrix(int A[3][3])
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if ((row == col && A[row][col] != 1) || (row != col && A[row][col] != 0))
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int A[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    int isIdentity = isIdentityMatrix(A);

    if (isIdentity)
    {
        printf("identity matrix");
    }
    else
    {
        printf("not identidty matrix");
    }
}