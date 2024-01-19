#include <stdio.h>
#define FLUSH while(getchar()!='\n')
#include <string.h>

int main()
{
 char arr[]={'h','e','l','l','o'};
 printf("Size occupied by character arr is %ld\n",sizeof(arr));

 char arr2[]="hello";
 printf("Size occupied by string arr2 is %ld\n",sizeof(arr2));

 printf("%s\n",arr);


 char arr3[5];

 scanf("%4s",arr3);
 printf("String using width is %s\n\n\n",arr3);

 //return 0;
 char arr4[10];

 FLUSH;
 scanf("%s",arr4);
 printf("%s\n",arr4);

//return 0;
FLUSH;
char arr5[50];
 //gets(arr5);
 fgets(arr5,50,stdin);
 //scanf("%s",arr5);
 puts(arr5);

//return 0;
 printf("Length of the string  is %ld\n",strlen(arr5));

 char arr4[50];
 strcpy(arr4,arr5);
 printf("After copying the entire string is now %s\n",arr4);

 //strncpy(arr5,arr4,5);
 //printf("After copying 5 characters is now %s\n",arr5);

 char arr6[5];
 scanf("%4s",arr6);
 if(strcmp(arr6,"bye")==0)
  printf("Values are equal\n");
 else if(strcmp(arr6,"bye")>0)
  printf("The value in arr 6 is greater than bye alphabetically\n");
else
  printf("The value in arr 6 is smaller than bye alphabetically\n");

 return 0;
 
}
