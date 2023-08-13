#include<stdio.h>
void *MemChr(const void *str_search , unsigned char value_search , unsigned int length);
int main()
{
 
    return 0;
}
void *MemChr(const void *str_search , unsigned char value_search , unsigned int length){
    unsigned char *search = str_search;

     if(str_search==NULL){
        printf("Erorr_NULL_pointer");
    }
    else{
        while (length--){
            if(*search==value_search){
                break;
            }
            else{
                search++;
            }
        }

    }
    if (*search==value_search){
        return search;
    }
    else{
        printf("Character_Not_Found\n");
        return NULL;
    }
    
}
