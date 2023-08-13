#include<stdio.h>
char *StrCpy(char *dest_Address, const char *src_Address);
int main()
{   
   
    return 0;
}
char *StrCpy(char *dest_Address, const char *src_Address){
    unsigned char *Destination=dest_Address;
    unsigned char *Source=src_Address;
    if((Destination==NULL)|| (Source==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while ((*Source)!='\0')
        {
            *Destination++=*Source++;
        }
        
    }
     return dest_Address ;
}
