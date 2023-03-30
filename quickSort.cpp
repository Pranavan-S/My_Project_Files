#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int partition(int arr[],int left, int right){
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j< right; j++){
        if (pivot >= arr[j]){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quickSort(int arr[], int left, int right){
    if (left<right){
        int pivot = partition(arr, left,right);
        quickSort(arr,left,pivot-1);
        quickSort(arr, pivot+1,right);
    }
}
int main(){
    int arr[] = {2,6,5,1,3,4};;
    int len = sizeof(arr)/sizeof(int);
    quickSort(arr,0,len -1);
    for (int x:arr){
        cout<<x<<" ";
    }
    return 0;
}/*
#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp = *a;
*a=*b;
*b = temp;
}
int partition (int A[], int p, int r)
{
int x = A[r];
int i = p - 1;
for (int j = p; j <= r- 1; j++)
{
if (A[j] <= x)
{
i++;
swap (&A[i], &A[j]);
}
}
swap (&A[i + 1], &A[r]);
return (i + 1);
}
void quickSort(int A[], int p, int r)
{
if (p < r)
{
int q = partition(A, p,r);
quickSort(A, p, q - 1);
quickSort(A, q + 1, r);
}
}
int main()
{
int a[] = {2,6,5,1,3,4};
int n = sizeof(a)/sizeof(a[0]);
quickSort(a,0,n-1);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}*/