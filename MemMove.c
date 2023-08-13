#include<stdio.h>
void *MemMove(void *String1, const void *String2, unsigned int length);
int main()
{   
        return 0;
}
void *MemMove(void *String1, const void *String2, unsigned int length){
    unsigned char *Str1=String1;
    unsigned char *Str2=String2;
    if((Str1==NULL)|| (Str2==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while (length--)
        {
            *Str1++=*Str2++;
        }
        
    }
     return String1 ;
}
