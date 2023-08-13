#include<stdio.h>
int MemCmp(const void *string1, const void *string2,unsigned int length);
int main()
{ 
     
    return 0;
}
int MemCmp(const void *string1, const void *string2,unsigned int length){
    unsigned char *str1 = (unsigned char*)string1;
    unsigned char *str2 = (unsigned char*)string2;
    int count=0;
     if((str1==NULL)||(str2==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while (length--){
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
                }
               
                
            }
        }

    }

     return count ;
}
