#include <iostream>
using namespace std;

void selectionSort(int arr[],int len);

int main(){
    int numbers[] = {9, 3, 7, 0, 6, 1, 4, 2, 8, 5, 0};

    selectionSort(numbers,11);

    for (int x:numbers){
        cout<<x<<" ";
    }
    return 0;
}

void selectionSort(int arr[],int len){
    int length, iMin, temp;
    length=len;

    for (int i=0; i<length-1; i++){
        iMin = i;
        for (int j=i+1; j<length; j++){
            if (arr[iMin] > arr[j]){
                iMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}