#include <stdio.h>
int main()
{
 int A[60];
 int i,j,k;
 for(i=0;i<20;i++)
 {
    j=i+20;
    k=i+40;
    A[i]=i*i;
    A[j]=j*j*j;
    A[k]= i + k;
}

for (int j=0; j<60; j++){

    printf("%d , ",A[j]);

}

return 0; 
}
