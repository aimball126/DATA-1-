
// DATA 1 : ASSIGNMENT 1 
// Name : Aimen Ahmed Almiladi
// Id : 2180107952

#include <iostream>
using namespace std;
//A function for solving question 1: it finds the pairs that add up to a certain target
void search(int array[], int size, int target)
{
    cout << " - The Pairs that sum up to " << target << " are : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                cout << "(" << array[i] << ", " << array[j] << ")" << endl;
            }
        }
    }
}

// a function for solving qustion 2: it finds the duplicate in the array .
void find_duplicate(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                cout << array[i] << " is duplicated.  " << endl;
            }
        }
    }
}
void largestSub(int arr[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
}

int main()
{
    //====================Question 1=========================
    //premade array
    int arr[] = {8, 7, 2, 5, 3, 1};
    // the fixed size of the array
    int size = 6;
    cout <<"Question 1" << endl<<"{  ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << "}" << endl;
    int target; 
    cout << " - Please Enter The Target Number :  ";
    cin >> target;
    search(arr, size, target);
 
 
  //==================== Question 2======================== 
    int arr1[] = {1, 2, 3, 4, 4};
    int size1 = 5;

    for(int i=0; i<50; i++){
        cout<<"=";
    }
    cout << " \n \n \n  Question 2 : "
         << " \n - the elements are  : "<< " ";
    cout << "  {  ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << "   ";
    }
    cout << "}" << endl;
    find_duplicate(arr1, size1);


    for(int i=0; i<50; i++){
        cout<<"=";
    }
    //=================Question 3===========================
    int arr2[] = {0, 0, 1, 1, 2, 2, 3, 4};
    int size2 = 8;
    cout << " \n \n \n  Question 3 : "
         << " \n - the elements are  : " << " ";
    cout << "  {  ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << "   ";
    }
    cout << "}" << endl;
    largestSub(arr2, size2);
    cout << " - the largest subarray is  : " << " ";
    cout << "  {  ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << "   ";
    }
    cout << "}" << endl;


cout<<"END OF PROGRAM : MADE BY AIMEN AL MILADI : 2180107952";
}