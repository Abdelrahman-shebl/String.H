#include<stdio.h>
char *StrNCat(char *dest, const char *src, unsigned int length);
int main()
{   
   
        return 0;
}
char *StrNCat(char *dest, const char *src, unsigned int length){
    unsigned char *Str1=dest;
    unsigned char *Str2=src;
    unsigned char *Str3;
    unsigned int i=0,j=0;

    if((Str1==NULL)||(Str2==NULL)){
        printf("Erorr_NULL_pointer");
    }
    else{
        while((Str1[i])!=0){
        Str3[j]=Str1[i];
        i++;
        j++;
        }
        i=0;
         while(length--){
        Str3[j]=Str2[i];
        i++;
        j++;
        }
        i=0;
       
        for(i;i<j;i++){
            Str1[i]=Str3[i];
        }
        
        
    }
     return Str1 ;
}
