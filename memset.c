#include<stdio.h>
void *MemSet(void *String, unsigned char c, unsigned int length);
int main()
{   
        return 0;
}
void *MemSet(void *String, unsigned char c, unsigned int length){
    unsigned char *Str=String;
    if(Str==NULL){
        printf("Erorr_NULL_pointer");
    }
    else{
        while (length--)
        {
            *Str++=c;
        }
        
    }
     return String ;
}
