#include<iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

void merge(int left[],int right[], int array[] );
void mergeSort(int array[],int array_size);

int main(){
    srand(time(nullptr));

    // Define the size of the array
    int size;
    cout<<"total elements in array: ";
    cin>>size;


    // Create an array of random numbers
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
    auto start_time = chrono::high_resolution_clock::now();
    mergeSort(arr,size);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    cout<<"time taken is "<<duration<<" microseconds.";

    return 0;
}

void merge(int left[],int left_size,int right[],int right_size,int array[]){
    
    int nl = left_size;
    int nr = right_size;
    int i=0,j=0,k=0;

    while (i<nl && j<nr){
        if (left[i]<=right[j])
        {
            array[k] =left[i];
            i+=1;
        }
        else
        {
            array[k] = right[j];
            j+=1;
        }
        k+=1;
    }
    while (i < nl){
        array[k] = left[i];
        k+=1;
        i+=1;
    }
    while (j < nr){
        array[k] = right[j];
        j += 1;
        k += 1;
    }
}

void mergeSort(int array[],int array_size){
    if (array_size < 2){return;}

    int mid = array_size/2;
    int left[mid],right[array_size - mid];

    for  (int i=0; i<mid; i++){
        left[i] = array[i];
    }
    for (int j=mid; j<array_size; j++){
        right[j-mid] = array[j];
    }

    mergeSort(left,mid);
    mergeSort(right,array_size-mid);
    merge(left,mid,right,array_size-mid,array);
}