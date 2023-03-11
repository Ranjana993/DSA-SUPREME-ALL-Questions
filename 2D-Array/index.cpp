#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// QUESTION 1 => SOLUTOIN
void print2DArray(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// QUESTION 2 => SOLUTOIN
void printRowWiseSum(int arr[][4], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum => " << sum << endl;
    }
}

// QUESTION 3 => SOLUTOIN
void printColWiseSum(int arr[][4], int n, int m)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        cout << "sum => " << sum << endl;
    }
}

// QUESTION 4 => SOLUTOIN
void GetMax(int arr[][4], int n, int m)
{

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    cout << "Maximun is  => " << maxi << endl;
}

// QUESTION 5 = > SOLUTOIN
void GetMin(int arr[][4], int n, int m)
{

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    cout << "Minimum number is  => " << mini << endl;
}

// QUESTION 6= > SOLUTOIN
void transposeMatrix(int arr[][4], int n, int m, int transposeArray[][4])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposeArray[j][i] = arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    // QUESTION 1 => PRINT 2D ARRAY ........................
    // int arr[4][4] = {{1, 12, 23, 4}, {25, 6, 17, 8}, {5, 16, 7, 8}, {9, 28, 3, 2}};
    // int n = 4, m = 4;
    // print2DArray(arr, n, m);

    // QUESTION 2 => PRINT 2D ROWWISE  ARRAY  SUM ........................
    // int arr[4][4] = {
    //     {2, 3, 4, 6},
    //     {5, 6, 7, 9},
    //     {2, 3, 5, 7},
    //     {9, 8, 7, 6}};
    // int n = 4, m = 4;
    // printRowWiseSum(arr, n, m);

    // QUESTION 3 => PRINT 2D COLUMNWISE  ARRAY  SUM ........................
    // int arr[4][4] = {
    //     {2, 3, 4, 6},
    //     {5, 6, 7, 9},
    //     {2, 3, 5, 7},
    //     {9, 8, 7, 6}};
    // int n = 4, m = 4;
    // printColWiseSum(arr, n, m);

    // QUESTION 4 => GET MAXIMUM .............
    // int arr[4][4] = {
    //     {2, 3, 4, 6},
    //     {5, 6, 7, 9},
    //     {2, 3, 5, 7},
    //     {19, 8, 7, 6}};
    // int n = 4, m = 4;
    // GetMax(arr, n, m);

    // QUESTION 5 => GET MINIMUM .............
    // int arr[4][4] = {
    //     {1, 3, 4, 6},
    //     {5, 6, 7, 9},
    //     {2, 3, 5, 7},
    //     {19, 8, 7, 6}};
    // int n = 4, m = 4;
    // GetMin(arr, n, m);

    // QUESTION 6 => TRANSPOSE A MATRIX  .............
    // int arr[4][4] = {
    //     {11, 3, 4, 6},
    //     {15, 6, 7, 9},
    //     {12, 3, 5, 7},
    //     {19, 8, 7, 6}};
    // int n = 4, m = 4;
    // int transposeArray[4][4];
    // transposeMatrix(arr, n, m, transposeArray);
    // print2DArray(transposeArray, n, m); // printing array ......
}