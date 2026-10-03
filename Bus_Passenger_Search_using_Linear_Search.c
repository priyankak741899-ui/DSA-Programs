#include<stdio.h>
int main(){
    int a[100],n,key,i,found=0;
    printf("Enter the Number of Passengers:");
    scanf("%d", &n);
    printf("Enter Passenger IDs:");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter Passenger ID to Search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            found=1;
            printf("Passenger ID is found at position %d\n",i+1);
            break;
        }
    }
    if(!found)
        printf("Passenger Not Found.\n");
    return 0;
}