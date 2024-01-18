#include<stdio.h>
void exchange(int *a,int *b){
    int t;
     t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int low,int high){
    int i=low;
    int j=high+1;
    int pivot=a[low];
    do
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j){
            exchange(&a[i],&a[j]);
        }
        
        
    } while (i<j);
    exchange(&a[low],&a[j]);      
    return j;
    
}
void quick(int a[],int low,int high){
    int j;
    if(low<high){
        j=partition(a,low,high);
        quick(a,low,j-1);
        quick(a,j+1,high);


    }
}


int main(){
    int a[7]={5,4,3,2,1,45,30};
    
    quick(a,0,6); 
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }

    return 0;
}