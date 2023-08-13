#include<stdio.h>
#include <string.h>
int StrColl(const char *string1, const char *string2);
int main()
{ 

    return 0;
}
int StrColl(const char *string1, const char *string2){
    unsigned const char *str1 = string1;
    unsigned const char *str2 = string2;
    int count=0;
     if((str1==NULL)||(str2==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while ((*str1)!='\0'){
            if(str1==str2){
                break;
            }
            else{
                if((*str1)==(*str2)){
                     str1++;
                     str2++;
                }
                else{ 
                    count=((*str1)>(*str2))?1:-1;
                     break;
                }
               
                
            }
        }

    }

     return count ;
}
