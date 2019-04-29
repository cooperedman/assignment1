
#include <stdio.h>
#include <ctype.h>
#include <string.h>

	//declaring 4 functions for each seperate task, encryption of rotation cipher, decryption of a rotation cipher, encryption of a substitution cipher and decryption of substitution cipher//
char encryptRtn ();

char decryptRtn ();

char encryptSub ();

char decryptSub ();

 
 
 
int
main () 
{
  
int x;                  // x variable used for user to input which function they want to use, for encryption of rotion cipher input 1, 2 for decryption of rtn cipher, 3 for encryption of substitution cipher and 4 for decryption of substitution cipher//
  
 
 
printf
    (" please enter: \n  1 to encrypt with rotation cipher\n  2 to decrypt with rotation cipher\n  3 to encrypt with substitution cipher\n  4 to decrypt with substitution cipher\n\n");
  
scanf ("%d", &x);
  
 
if (x == 1)             // if user inputs x = 1, this will take them to the encryption of rotation cipher function//
    encryptRtn ();
  
 
 
  else if (x == 2)               // this will take the user to decryption of rotation cipher function//
    decryptRtn ();
  
 
  else if (x == 3)               // takes user to encryption of substitution cipher function// 
    encryptSub ();
  
 
 
  else if (x == 4)             // takes user to decryption of substituion cipher function//
    decryptSub ();
  
 
 
  else
    
printf (" incorrect value entered, please try again");       // will print this is user doesnt input correct x value//
  
return 0;

}




// function to encrypt rotation cipher once user input the message wnated to encrypt//
  char encryptRtn ()                     

 
{
  
char message[100], letter;      //  character array used to hold all letters of alpha string set to 100 to keep 101 values  ( more than enough)
  int i;// used as a incrementer
  
int key;// used to determine shift value
  
 
printf ("Enter a message to encrypt: ");// sending user a prompt to enter a message they want to encrypt to stdout
  
scanf ("%s", message); 
  
 
printf ("message entered is %s\n", message);
  
printf ("Enter key: ");
  
 
scanf ("%d", &key);
  
 
for (i = 0; message[i] != '\0'; ++i)// for loop to make i increment when starting at i=0 and the array isnt equal to the terminator value
    {
      
letter = message[i]; //   makes letter the holder for each array value of message 
      
 
if (letter >= 'a' && letter <= 'z')// if ststament to ensure values stay within a and z
      {
        
letter = letter + key;
        
 
if (letter > 'z') // if letter is greater than z, the equation below will return it back to begining of alphabet
     {
        
letter = letter - 'z' + 'a' - 1;
            
}
   
 
message[i] = letter;
      
}
      
      else if (letter >= 'A' && letter <= 'Z')
       {
        
letter = letter + key;
        
 
if (letter > 'Z')
     {
        
letter = letter - 'Z' + 'A' - 1;
            
}
   
 
message[i] = letter;
      
}
    
}
  
 
printf ("Encrypted message: %s", message); // prints all the array values
  
 
return 0;                        //  returns nothing
}


 

 
 
char
decryptRtn () // function prototype for the decryption rotation cipher function, all commenting from encryptRtn applies here
 
{
  
char message[100], letter;
  
int i, key;
  
 
printf ("Enter a message to decrypt: ");
  
scanf ("%s", message);
  
printf ("message entered is %s\n", message);
  
printf ("Enter key: ");
  
scanf ("%d", &key);
  
 
for (i = 0; message[i] != '\0'; ++i)
    {
      
letter = message[i];
      
 
if (letter >= 'a' && letter <= 'z')
      {
        
letter = letter - key; //  used - key as decryption is going the opposite way to the encryption cipher equation
        
 
if (letter < 'a')
     {
        
letter = letter + 'z' - 'a' + 1;
            
}
   
 
message[i] = letter;
      
}
      
      else if (letter >= 'A' && letter <= 'Z')
       {
        
letter = letter - key;
        
 
if (letter < 'A')
     {
        
letter = letter + 'Z' - 'A' + 1;
            
}
   
 
message[i] = letter;
      
}
    
}
  
 
printf ("Decrypted message: %s", message);
  
 
 
return 0;

}



 char encryptSub()// function prototype for the encryption of substitution cipher placed 3rd down asapplies when user inouts x = 3

 
{
  
 
 
char file[] =
    "RCR VYE BGBX HBNX FHB FXNQBRV YM RNXFH IZNQEBCJ FHB PCJB?"; // char array used to enable programer to encrypt text. text must be inserted here, not in stdin
  
char alpha[26] =
    { 'K', 'E', 'I', 'J', 'U', 'T', 'V', 'H', 'P', 'S', 'N', 'C', 'F', 'A',
'M', 'W', 'G', 'D', 'Z', 'Q', 'X', 'Y', 'B', 'R', 'O', 'L' }; // this array is what the letters used get changed to, from a-z in order
  
char letter;// used to hold array values as char variables
 
int index;// used to increment through the array to extract each letter later becomes j
  
 
int length = strlen (file);// making variabe length the same as the length of the file
  
 

for (int i = 0; i < length; i++)// loop used to go though entire array whilst i is less than the end of file
    
 
    {
      
 
if (file[i] >= 'A' && file[i] <= 'Z')// using ascii values to ensure of the value inputed isnt in the range of A-Z, if so, will return z+1 as A
  {
        
 
letter = file[i];// variable letter holds array values and used to print to stdout
   
 
 
 
for (int j = 0; j < 26; j++) // loop to 
      
 
     {
        
 
if (alpha[j] == letter)// if statement to ensure that the jth value in the alpha array equals the letter, if id doesnt the file ith value become A + the index value
               
 
             {
                
 
index = j;
                
 
}
         
 
             else
             
 
             {
              
 
}
       
 
 
 
}
     
 
 
 
 
 
file[i] = 'A' + index;
    
 
}
    
 
}
  
 
 
 
for (int k = 0; k < length; k++)
    
 
    {
      
 
printf ("%c", file[k]);// prints the characters of the file array as new varibale k( needed as we made i = j) goes through the file arrays data, and will terminate when k = lengh or EOF 
    
 
} 
 
 
 
 
 
 
 
 
return 0;

}


 
 
 
 
char
decryptSub () // decrypt substitution, look at encrypt substitution code commenting as identical, except for char alpha ( decrypt key) and the file array, (user input)
 
{
  
 
 
char file[] = "DEFENSIVE GGG";
  
char alpha[26] =
    { 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A' };
  
 
char letter;
  
 
 
int index;
  
 
int length = strlen (file);
  
 
 
 
for (int i = 0; i < length; i++)
    
 
    {
      
 
if (file[i] >= 'A' && file[i] <= 'Z')
  {
        
 
letter = file[i];
   
 
 
 
for (int j = 0; j < 26; j++)
      
 
     {
        
 
if (alpha[j] == letter)
               
 
             {
                
 
index = j;
                
 
}
         
 
             else
             
 
             {
              
 
}
       
 
 
 
}
     
 
 
 
 
 
file[i] = 'A' + index;
    
 
}
    
 
}
  
 
 
 
for (int k = 0; k < length; k++)
    
 
    {
      
 
printf ("%c", file[k]);
    
 
} 
 
 
 
 
 
 
 
 
return 0;

 
}


 
 
 
 
 
 


