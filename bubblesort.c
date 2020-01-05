#include <stdio.h>
void bubblesort(int  *arr ,int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
}
int main() {
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    //排序后
    for(int j=0;j<n;j++)
    printf("%d",arr[j]);
    printf("\n");
    return 0;
}