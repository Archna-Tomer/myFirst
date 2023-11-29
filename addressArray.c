#include<stdio.h>
int main(){
    // int a[10];
    // int *ptr;
    // ptr=a;
    // int i=7;
    // int x=i-0;
    // printf("%u",&a[i]);
    // printf("\n\n%u",a+x);

//     int b[5][4];
//     int i=4,j=3;
//     int x=(i-0)*(3-0+1)+(j-0);
//     printf("%u",&b[i][j]);
// printf("\n%u",b[0]+x);


int c[4][5][6];
int i=3,j=4,k=5;
int x=((i-0)*(4-0+1)*(5-0+1))+((j-0)*(5-0+1))+(k-0);
printf("%u",&c[i][j][k]);
printf("\n%u",c[0][0]+x);  

// int a[5]={ 1,2,3,4,5};
// int b[5]={4,3,7,6,1},c[10];
// int n=5,m=5,i=0,j=0,k=0;
// while(i<n && j<m){
//     if(a[i]<b[j]){
//         c[k]=a[i];
//         i++;
//         k++;
//     }
//     else{  
//         c[k]=b[j];
//         k++;
//         j++;
//     }
// }
// while(i<n){
//     c[k]=a[i];
//     i++;
//     k++;
// }
// while(j<m){
//     c[k]=b[j];
//     j++;
//     k++;
// }
// for(int i=0;i<k;i++){
//     printf("%d",c[i]);
// }


//------------------ADDITION------------
// int a[100],b[100],c[100],n;
// printf("enter the size");
// scanf("%d",&n);
// for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
// }
// for(int i=0;i<n;i++){
//     scanf("%d",&b[i]);
// }
// for(int i=0;i<n;i++){
//    c[i]=a[i]+b[i];
// }

// for(int i=0;i<n;i++){
//     printf("%d",c[i]);
// }

//--------------------------MULTIPLICATION--------------------
// int a[100][100],b[100][100],c[100][100],m,n,p,q;
// printf("enter the size");
// scanf("%d%d%d%d",&m,&n,&p,&q);
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//     scanf("%d",&a[i][j]);
//     }
// }
// for(int i=0;i<p;i++){
//     for(int j=0;j<q;j++){
//     scanf("%d",&b[i][j]);
//     }
// }
// if(n==p){
//     for(int i=0;i<m;i++){
        
//         for(int j=0;j<q;j++){
//             c[i][j]=0;
//             for(int k=0;k<n;k++){
//                 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
//             }

//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             printf("%d\t",c[i][j]);

//         }

// printf("\n");
//     }

// }
// else{
//     printf("not possible");
// }


int a[100][100],b[100][100],n;
printf("Enter the size");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       b[j][i]=a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",b[i][j]);
    }
    printf("\n");  
}




























    return 0;
}