#include<stdio.h>
int main(){
    int arr[7]={1,2,3,2,5,6,8};
    int size=7;
    printf("Size of array before deleting: %d",size);
    int ele=2;
    for (int i=0;i<size;){
        if(arr[i]==ele){
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }
        else{
            i++;
        }
    } 
    printf("\nSize of array after deleting: %d",size);
    printf("\nElements of array after deletion: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}