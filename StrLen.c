#include<stdio.h>
size_t StrLen(const char *String);
int main()
{   
    return 0;
}
size_t StrLen(const char *String){
    unsigned char *Str=String;
    unsigned int count =0;
    if(Str==NULL){
        printf("Erorr_NULL_pointer");
    }
    else{
        while ((*Str++)!='\0')
        {
            count++;
        }
        
    }
     return count ;
}
