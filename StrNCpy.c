#include<stdio.h>
char *StrNCpy(char *dest_Address, const char *src_Address, unsigned int length);
int main()
{   
  
    return 0;
}
char *StrNCpy(char *dest_Address, const char *src_Address, unsigned int length){
    unsigned char *Destination=dest_Address;
    unsigned char *Source=src_Address;
    if((Destination==NULL)|| (Source==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while (length--)
        {
            *Destination++=*Source++;
        }
        
    }
     return dest_Address ;
}
