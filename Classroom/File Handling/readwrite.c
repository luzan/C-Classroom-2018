#include <stdio.h>
// File handling functions are declared inside stdio.h file
int main ( )
{
	// files are handled using pointer of type FILE, where file is a Structure in C
	// FILE is not a keyword but a struct name
	// here I have created 2 FILE pointers to point files 
   FILE *outfile, *infile ;
   int b = 5, f ;
   float a = 13.72, c = 6.68, e, g ;
   
   // i am opening hello.txt file in write mode "w"
   // to open file, we use fopen() function
   // fopen() function takes two parameter, first one is filename
   // second is the mode in which I want to open a file
   // the file opened in write mode is now referenced using outfile pointer
   outfile = fopen ("hello.txt", "w") ;
   
   // to write data to file we use fprintf() function
   // unlike printf() that used to take 2 parameters
   // fprintf() takes 3 parameters as shown below
   // First parameter is the pointer to the file, on which we are writing
   // Second parameter is control string, that can have text or conversion specifiers
   // third is list of variables that will replace conversion specifiers in second parameter
   fprintf (outfile, " %f %d %f ", a, b, c) ;
   
   // now that we are done writing on the file, and we have completed the objective of
   // opening the file in write mode, we can close the file so that the pointer is freed
   // to close file, we use fclose() which takes filename as parameter, as shown below
   fclose (outfile) ;
   
   // now I am opening same hello.txt file using fopen() but in read "r" mode
   // read mode can open files that exists, if file doesnot exists it will return error
   // here infile pointer will reference the file
   infile = fopen ("hello.txt", "r") ;
   
   // to scan data from file and save it into variables, we use fscanf() function
   // unlike scanf() it takes 3 parameters, where first one is file pointer
   // second parameter represents control string 
   // third is list of variables on which data are to be stored
   fscanf (infile,"%f %d %f", &e, &f, &g) ;
   
   // now that data is stored in variables e f and g we can print it to console using printf() 
   printf (" %f %d %f \n ", a, b, c) ;
   printf (" %f %d %f \n ", e, f, g) ;
   
   // after completing the task on file, we close the file using fclose() 
   fclose(infile);
}


