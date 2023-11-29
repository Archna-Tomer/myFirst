#include<stdio.h>
int main(){
    //1-D ARRAY ADDRESS
    // int a[10];
    // int *ptr;
    // ptr=a;
    // int i=7;
    // int x=i-0;
    // printf("%u",&a[i]);
    // printf("\n\n%u",a+x);

    
//2-D ARRAY ADDRESS
//     int b[5][4];
//     int i=4,j=3;
//     int x=(i-0)*(3-0+1)+(j-0);
//     printf("%u",&b[i][j]);
// printf("\n%u",b[0]+x);

//3-D ARRAY ADDRESS
int c[4][5][6];
int i=3,j=4,k=5;
int x=((i-0)*(4-0+1)*(5-0+1))+((j-0)*(5-0+1))+(k-0);
printf("%u",&c[i][j][k]);
printf("\n%u",c[0][0]+x);  


    return 0;
}
