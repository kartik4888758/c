#include <stdio.h>

int main(){
    FILE *fptr;
    //if file not available new will be created in w mode
    fptr=fopen("test.txt","r");
    

    //char ab;
    //ab=fgetc(fptr);

    //loop to continuous reading
    //while (ab !=EOF)
    //{
    //    printf("%c",ab);
    //    ab=fgetc(fptr);
    //}
    //printf("\n");//

    fputc('m',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);




    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));


    
    //fprintf(fptr,"%c",'m');
    //fprintf(fptr,"%c",'a');
    //fprintf(fptr,"%c",'n');
    //fprintf(fptr,"%c",'g');
    //fprintf(fptr,"%c",'a');
    
    fclose(fptr);
    return 0;


}
