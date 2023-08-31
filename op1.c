
//1.to print data from text file till EOF (using fget)
//2.to print data one by one from text file.
//3.to print data into existing text file. 
//4.to append data into existing text file.
#include <stdio.h>
int main(){
FILE *fptr;
fptr=fopen("test.txt","w");

// char ab;
// ab=fgetc(fptr);
// //printing from file till EOF...............................(2)
// while (ab !=EOF)
// {
//     printf("%c\n",ab);
//     ab=fgetc(fptr);
// }


//????????????DIDN'T WORKED?????????????

// fputc('m',fptr);
// fputc('a',fptr);
// fputc('n',fptr);
// fputc('g',fptr);
// fputc('o',fptr);

//to print character by character from text file
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));

//to print data into text file
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);


//to append data into existing text file

// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'E');
// fprintf(fptr,"%c",'T');
// fprintf(fptr,"%c",'L');
// fprintf(fptr,"%c",'I');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%d",0);
// fprintf(fptr,"%d\n",1);

//to print singlr char by char into text file

// fputc('m',fptr);
// fputc('a',fptr);
// fputc('n',fptr);
// fputc('g',fptr);
// fputc('o',fptr);










fclose(fptr);
return 0;
}