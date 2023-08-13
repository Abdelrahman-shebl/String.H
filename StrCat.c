#include<stdio.h>
char *StrCat(char *String1, const char *String2);
int main()
{   
    char src[50] ="This is source";
    char dest[50]="This is destination";
    StrCat(dest, src);
    printf("Final destination string : |%s|", dest);
        return 0;
}
char *StrCat(char *String1, const char *String2){
    unsigned char *Str1=String1;
    unsigned char *Str2=String2;
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
         while((Str2[i])!=0){
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
