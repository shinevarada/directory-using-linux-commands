#include<stdlib.h>
#include <stdio.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
int main() 
  
{ char a[10],b[10],c[10];
  printf("Enter the name of directory: ");
  scanf("%s",a);
  printf("Enter the name of subdirectory: ");
  scanf("%s",b);
  printf("Enter name of file : ");
   scanf("%s",c);
  int mkdir(const char *vo, mode_t mode);
    // Creating a directory 
    if (mkdir("vo", 0777) == -1) 
        printf ("Error   " ); 
  
    else
        printf("Directory created\n"); 
  
  int mkdir(const char *vu, mode_t mode);
    // Creating a directory 
    if (mkdir("/home/soft/16cs56/vo/vg",0777) == -1) 
        printf ("Error   " ); 
  
    else
        printf("Sub Directory created\n"); 
      FILE *fptr;
    
    printf("Two level directory successfully created");
   
    /*  open for writing */
    fptr = fopen("/home/soft/16cs56/vo/vg/em.txt", "w");

fclose(fptr);
return 0;
} 
