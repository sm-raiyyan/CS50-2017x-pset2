//   coder: SM Raiyyan 
//   program: capitalises the initials 

   

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>



// main funtion does not take any arguments
int main(void)
{
    // get name of user
    string name = get_string();
    
    // print the first character in uppercase
    printf("%c", toupper(name[0]));
   
    // loop for the next 
    for ( int i = 0, n = strlen(name); i < n; i++)
    {
        // check space and end of characters
        if ( name[i] == ' ' && name[i + 1] != '\0') 
        {
            // print the rest of the initials and increment
            printf("%c",toupper(name[i + 1])); 
            i++;
      
        }
       
    }
    
    // print a new line after the initials
    printf("\n"); 
}