// Reverse with function and pointer,  loop
#include<stdio.h>
void reversing(int *a, int m){
    for(int i=m-1; i>=0; i--)
    {
        printf("%d ",*(a+i));
        
    }
}


int main (){
    int m;
    scanf("%d", &m);
    int a[m];
    for(int i=0;i<m; i++){
        scanf("%d",a+i);
    }
    reversing (a,m);
  
}

