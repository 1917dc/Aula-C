#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct {
     
    char *a;
    char *b; 
    char *c; 
    int d; 
    char *e; 
    char *f;
    char *g; 
     
} struct_test;
 
 
int main ()
 {
    char str[] = "this is a test string::\r\n"
               "value1: 5\r\n"
               "value2: 67\r\n\r\n";
                
               char *line;
               char *token;
               char buf[256];
   
   
  struct_test test;
 
 for (line = strtok (str, "\r\n"); line != NULL; line = strtok (line + strlen (line) + 1, "\r\n")) {
       
      strncpy (buf, line, sizeof (buf));
      printf ("Line: %s\n",buf);
     
   
    for (token = strtok (buf, " "); token != NULL; token = strtok (token + strlen (token) + 1, " ")){
         printf ("\tToken: %s\n",token);
         
         
        }
         
    }
         
     
return 0;
 
 
}