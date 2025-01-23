
#include<stdio.h>

int search(int arr[],int len,int element){
     int found=0;
    for (int i =0; i<len;i++){
        if(arr[i]==element){
            printf("Element found at location %d",i);
            found=1;
            return i;
        }
    }
    if(!found){
        printf("Element not found");
        return -1;
        }

};


int main(){
    int arr[5]={1,2,3,4,5};
    int sr = 2;
    int len = sizeof(arr)/sizeof(int);
    search(arr,len,2);
     return 0;
}


