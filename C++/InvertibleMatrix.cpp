#include<iostream>
#include<math.h> 
using namespace std;
double det(int n, double mat[10][10])
{
    int subj = 0, subi = 0, i, j, c;
    double submat[10][10], d = 0;
    if (n == 2)
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    else
    {
        for (c = 0; c < n; c++)
        {
            for (i = 1; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (j == c)
                        continue;
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
             }
            d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));
        }
    }
    return d;
}
int main(int argc, char **argv)
{
    int n, i, j;
    double mat[10][10];
	cout << "Enter order of the matrix : ";
    cin >> n;
    cout << "Enter the elements of the matrix : ";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat[j][i];
    if (det(n, mat) != 0)
        cout << "The given matrix is invertible.\n ";
    else
        cout << "The given matrix is not invertible.\n ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)	
            cout << mat[i][j] << " ";
        cout << "\n ";
    }
}