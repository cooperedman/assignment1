#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
 //declaring 4 functions for each seperate task, encryption of rotation cipher, decryption of a rotation cipher, encryption of a substitution cipher and decryption of substitution cipher//
 char encryptRtn();
 char decryptRtn();
 char encryptSub();
 char decryptSub();
 
 
 
int main()
{    
    int x;// x variable used for user to input which function they want to use//
    
    
    
    printf(" please enter: \n  1 to encrypt with rotation cipher\n  2 to decrypt with rotation cipher\n  3 to encrypt with substitution cipher\n  4 to decrypt with substitution cipher\n\n");
    scanf("%d" ,&x);

    if (x ==1)// if user inputs x = 1, this will take them to the encryption of rotation cipher function//
     encryptRtn();


else if (x == 2)// this will take the user to decryption of rotation cipher function//
 decryptRtn();
 
 else if (x==3)// takes user to encryption of substitution cipher function// 
   encryptSub();

 
 else if (x==4) // takes user to decryption of substituion cipher function//
   decryptSub();
  
  
 else
 printf(" incorrect value entered, please try again"); // will print this is user doesnt input correct x value//

return 0;
}




// function to encrypt rotation cipher//
 char encryptRtn()// function prototype//
 
 
 {
	char message[100], letter;
	int i;
	int key;
	
	printf("Enter a message to encrypt: ");
	scanf("%s", message);
    
	printf("message entered is %s\n", message);
	printf("Enter key: ");
	
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		letter = message[i];
		
		if(letter >= 'a' && letter <= 'z'){
			letter = letter + key;
			
			if(letter > 'z'){
				letter = letter - 'z' + 'a' - 1;
			}
			
			message[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){
			letter = letter + key;
			
			if(letter > 'Z'){
				letter = letter - 'Z' + 'A' - 1;
			}
			
			message[i] = letter;
		}
	}
	
	printf("Encrypted message: %s", message);
	
	return 0; //  returns the new message back to main function
}






 char decryptRtn()
 
{
	char message[100], letter;
	int i, key;
	
	printf("Enter a message to decrypt: ");
    scanf("%s", message);
    printf("message entered is %s\n", message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		letter = message[i];
		
		if(letter >= 'a' && letter <= 'z'){
			letter = letter - key;
			
			if(letter < 'a'){
				letter = letter + 'z' - 'a' + 1;
			}
			
			message[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){
			letter = letter - key;
			
			if(letter < 'A'){
				letter = letter + 'Z' - 'A' + 1;
			}
			
			message[i] = letter;
		}
	}
	
	printf("Decrypted message: %s", message);
	
	
	return 0;
}


 char encryptSub()

{

   
    char file[]="RCR VYE BGBX HBNX FHB FXNQBRV YM RNXFH IZNQEBCJ FHB PCJB?";
    char alpha[26] = {'K','E','I','J','U','T','V','H','P','S','N','C','F','A','M','W','G','D','Z','Q','X','Y','B','R','O','L'};

    
    char letter;

    



    int index;

    int length = strlen(file);

    

                for (int i=0; i < length ; i++)

                {

                    if(file[i]>='A'&&file[i]<='Z'){ 

                                letter = file[i];

                    

                                            for(int j =0; j <26 ; j++)

                                            {

                                                        if (alpha[j] == letter)

                                                        {

                                                            index = j;

                                                        }

                                                        else

                                                        {

                                                        }

                                                

                                            }

                                    

                                    

                                    file[i] = 'A'+index;

                    }

                }

    

            for (int k=0; k < length ; k++)

            {

                printf("%c", file[k]);

            }


    

    

    

    return 0;
}



    
   char decryptSub()

{


    char file[]="DEFENSIVE GGG";
    char alpha[26] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'};
    
    char letter;

    
    int index;

    int length = strlen(file);

    

                for (int i=0; i < length ; i++)

                {

                    if(file[i]>='A'&&file[i]<='Z'){ 

                                letter = file[i];

                    

                                            for(int j =0; j <26 ; j++)

                                            {

                                                        if (alpha[j] == letter)

                                                        {

                                                            index = j;

                                                        }

                                                        else

                                                        {

                                                        }

                                                

                                            }

                                    

                                    

                                    file[i] = 'A'+index;

                    }

                }

    

            for (int k=0; k < length ; k++)

            {

                printf("%c", file[k]);

            }


    

    

    

    return 0;

}



