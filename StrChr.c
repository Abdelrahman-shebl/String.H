#include<stdio.h>
char *StrChr(const char *str_search, unsigned char value_search);
int main()
{
    return 0;
}
char *StrChr(const char *str_search, unsigned char value_search){
    unsigned char *search = str_search;

     if(str_search==NULL){
        printf("Erorr_NULL_pointer");
    }
    else{
             while ((*search)!='\0'){
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
