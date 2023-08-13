#include<stdio.h>
#include<string.h>
void *MemCpy(void *dest_Address, const void * src_Address, unsigned int length);
int main()
{  
    return 0;
}
void *MemCpy(void *dest_Address, const void * src_Address, unsigned int length){    
    unsigned char *Destination=dest_Address;
    unsigned char *Source=src_Address;
    unsigned int len=(sizeof(dest_Address));
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
