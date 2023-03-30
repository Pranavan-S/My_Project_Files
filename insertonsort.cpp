#include<iostream>
using namespace std;



int main(){
    int arr[]={2,4,6,8,3};
    int value,hole,n;
    n=5;
    for (int i=1;i<5;i++){
        value=arr[i];
        hole=i;

        
        while (hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole-=1;
        }
        arr[hole]=value;

    }
    for (int x:arr){
        cout<< x<<" ";
    } 
    return 0;
}