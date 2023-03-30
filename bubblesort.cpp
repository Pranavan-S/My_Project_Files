#include <iostream>
using namespace std;

void bubbleSort(int array[], int len);

int main(){

    int numbers[] = {9, 3, 7, 0, 6, 1, 4, 2, 8, 5, -1};
    bubbleSort(numbers,11);

    for (int i=0;i<11;i++){
        cout<<numbers[i]<<" ";
    }

    return 0;
}
void bubbleSort(int array[], int len){
    int value,length,flag;
    length = len;

    for (int i=1; i<length; i++){
        flag=0;
        for (int j=0;j<length-i; j++){
            if (array[j] > array[j+1]){
                value = array[j+1];
                array[j+1] = array[j];
                array[j] = value;
                flag=1;

            }
        }
        if (flag==0)
            break;
    }
}

