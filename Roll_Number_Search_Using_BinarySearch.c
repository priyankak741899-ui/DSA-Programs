#include<stdio.h>
int main(){
    int a[100],n,i,j,temp,key,low,high,mid,found=0;
    printf("Enter the Number of Students:");
    scanf("%d", &n);
    printf("Enter the Roll Number:");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Enter the Roll Number to Search:");
    scanf("%d", &key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            found=1;              
            break;
        }
        else if(key<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
   }
   if(found)
       printf("Roll Number is Found.\n");
   else
       printf("Roll Number Not Found.\n");   
}
