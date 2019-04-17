#include<stdio.h>// fget(), stdin
#include<string.h>//stringlen()


//Define my Caesar Cipher Function
 void caesarCipher(char* plainText, int key);

int main(void){
	
	int key = 1;
	char plainText[101];
	
	//Ask the user for the plain text to encrypt
	printf("Please enter the plain text you want to encrypt: ");
	
	
	
	scanf("%s", plainText);
	/*Get the users text input and store it in plainText variable
	fgets(plainText, sizeof(plainText), stdin);*/
	
	printf( "%s\n", plainText);
	//Print the ciphered text
	printf("The ciphered text is : ");
	
	//Print the ciphered text
	caesarCipher(plainText, key);
	
	
}

void caesarCipher(char* plainText, int key){
	
	int i=0;
	int cipherValue;
	char cipher;
	
	while( plainText[i] != '\0' && strlen(plainText)  > i){
		cipherValue = ((int)plainText[i]   + key) % 26 + 46;
		cipher = cipherValue;
		
		printf("%c", cipher);
		i++;
	}
	
}







































/*void caesarCipher(char* plaintext, int key); 

int main()  {

char plainText[101];




printf("insert the text you want encrypted ");


fgets(plainText, sizeof(plainText), stdin);

printf(" the ciphered text is");

return 0;



}

void caesarCipher(char* plaintext, int key){
    
    int i = 0;
    char cipher;
    int cipherValue;
    int key = 1;
    
    while(plainText[i] != '\0' && strlen(plainText-1>i)){
        cipherValue = (letter + key - 97) % 26 +97);

        cipher = (char)(cipherValue)*/
        
        
        
    
    
    
  
    
    


