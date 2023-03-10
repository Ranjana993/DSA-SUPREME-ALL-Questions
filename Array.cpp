#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

// QUESTION 1 => SOLUTION
void count01(vector<int> &arr)
{
    int n = arr.size();
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
    }
    cout << "No of 0 is " << count0 << endl;
    cout << "No of 1 is " << count1 << endl;
}



// QUESTION 2 => SOLUTION
int findMaximum(vector<int> &arr)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}



// QUESTION 3 => SOLUTION
int findMini(vector<int> &arr)
{
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}



// QUESTION 4 => SOLUTION
int findSum(vector<int> &arr)
{

    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// QUESTION 5 => SOLUTION
void extremePrint(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        cout << arr[start] << " " << arr[end] << " ";
        start++, end--;
    }
}



// QUESTION 6 => SOLUTION
void findUnion(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ans.push_back(arr2[i]);
    }

    for (auto item : ans)
    {
        cout << item << " ";
    }
}



// QUESTION 7 => SOLUTION
void findIntersection(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                break;
            }
        }
    }

    for (auto item : ans)
        cout << item << " ";
}



// QUESTION 8 => SOLUTION
int pairSum(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (element + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}



// QUESTION 9 => SOLUTION
int tripletSum(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int elemt1 = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < n; k++)
            {
                if (element2 + elemt1 + arr[k] == target)
                {
                    return true;
                }
            }
        }
    }
    return false;
}



// QUESTION 10 =>  SOLUTION
void sort01(vector<int> &arr)
{
    int start = 0, end = arr.size(), i = 0;

    while (i != end)
    {
        if (arr[start] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else if (arr[i] = 1)
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }
}



int main()
{
    // QUESTION 1 => Count 0, 1 ........................
    // vector<int> arr{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0};
    // count01(arr);

    // QUESTION 2 => MAXIMUM ELEMENT FROM AN ARRAY ..........................
    // vector<int> arr{2, 3, 4, 5, 6, 7, 1, 6, 9};
    // int ans = findMaximum(arr);
    // cout << " the Max element is => " << ans << endl;

    // QUESTION 3 => MAXIMUM ELEMENT FROM AN ARRAY ............
    // vector<int> arr{2, 3, 4, 5, 6, 7, 1, 0 , 6, 9};
    // int ans = findMini(arr);
    // cout << " the Minimum  element is => " << ans << endl;

    // QUESTION 4 => Find sum of array elements ;
    // vector<int> arr{12 ,2 , 4 ,5 ,6 ,2 };
    // int ans = findSum(arr);
    // cout<< "Sum of array elemnt is => " <<ans << endl;

    // QUESTION 5 => Extreme print array element ..................
    // vector<int> arr{10  ,20 , 40 , 30 , 90 , 50 };
    // extremePrint(arr);

    // QUESTION 6 => Find Union elemnt with duplicates ......................
    // vector<int> arr1{2, 4, 5, 7, 8, 3, 9};
    // vector<int> arr2{3, 1, 6};
    // findUnion(arr1, arr2);

    // QUESTION 7 => Find intersection of two array  ......................
    // vector<int> arr1{2, 4, 6, 7, 8, 3, 9, 3};
    // vector<int> arr2{3, 1, 6, 3, 3};
    // findIntersection(arr1, arr2);

    // QUESTION 8 =>Pair sum ............................
    // vector<int> arr{2, 3, 4, 6, 7, 8, 2};
    // int target = 14;
    // int ans = pairSum(arr, target);
    // if(ans){
    //     cout << "found " << endl;
    // }
    // else{
    //     cout << "Not found "<<endl;
    // }

    // QUESTION 9 => Triplet sum ............................
    // vector<int> arr{2, 4, 3, 6, 8, 9, 1, 6, 7};
    // int target = 6;
    // int ans = tripletSum(arr, target);
    // if (ans)
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not found" << endl;
    // }

    // QUESTION 10 => SORT 0 and 1 ...................
    vector<int> arr{1, 1, 1, 1, 1, 0, 1, 0, 1, 0};
    sort01(arr);
    for(auto item : arr) cout << item << " ";



    
}