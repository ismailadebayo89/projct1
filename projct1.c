#include <stdio.h>
#include <stdlib.h>
#define MAX 10800
#define KEY 23
int main()
{
 int i = 0;
 int x, y;
 char str[MAX];
    
    printf("\nPlease enter a sentence:\t");
    scanf ("%[^\n]s\n", str);//scanning the sentence operation
    printf("\nPlease choose encryption method:\n");
    printf("1 = Rotation Encryption\n");
    printf("2 = Substitution Encryption\n");
    scanf("%d", &x);
    if (x != 1 && x != 2)
    {
    	printf("Value entered is invalid!!! \n");
    	printf("Exiting.....\n");
    	return 0;
    }
    if(x==1)
    {
        printf("\nPlease choose following options:\n");
        printf("1 = Encrypt the sentence.\n");
        printf("2 = Decrypt the sentence.\n");
        printf("3 = Encrypt the sentence with key.\n");
        printf("4 = Decrypt the sentence with key.\n");
        scanf("%d", &y);//the term is wether encrypting or decrypting
    	if (x != 1 && x != 2 && x != 3 && x != 4)
    	{
		printf("value entered is invalid!!! \n");
		printf("Exiting.....\n");
		return 0;
	}
        if(y==1)// the rotation cipher code begins here
        {
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
                if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]- 'A' + KEY)% 26;
                }
                else if(str[i] <= 'z' && str[i] >= 'a')// this allows the user to input in lower case but the result is printed in upper case
                {
                    str[i] = 'A' + (str[i]- 'A' + KEY)% 26;
                }
            printf("\n The Encrypted sentence: \n%s\n", str);
            }
        }
        if(y==2)
        {
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
                if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]+ 'A' - KEY)% 26;
                }
                else if(str[i] <= 'z' && str[i] >= 'a')// this allows the user to input in lower case but the result is printed in upper case
                {
                    str[i] = 'A' + (str[i]+ 'A' - KEY)% 26;
                }
            }
             printf("\n The decrypted sentence: \n%s\n", str);
        }
        if(y==3)
        {
            int key = 0; //key is not given an initial value, rather is it taken from the user
            printf("Please enter the key\n");
            scanf("%d",&key);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
              if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]- 'A' + key)% 26;
                }
                else if(str[i] <= 'z' && str[i] >= 'a')// this allows the user to input in lower case but the result is printed in upper case
                {
                    str[i] = 'A' + (str[i]- 'A' + key)% 26;
                }
            }
            printf("\n The Encrypted sentence: \n%s\n", str);
        }
        if(y==4)
        {
            int key = 0;// the key is declared with a value of 0 which is then scanned later from the user.
            printf("Please enter the key\n");
            scanf("%d",&key);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
                if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]+ 'A' - key)% 26;
                }
                else if(str[i] <= 'z' && str[i] >= 'a')// this allows the user to input in lower case but the result is printed in upper case
                {
                    str[i] = 'A' + (str[i]+ 'A' - key)% 26;
                }
            }
            printf("\n The decrypted sentence: \n%s\n", str);
        }
    }
    if(x==2)// the substitution cipher code begins from here
    {
        printf("\nPlease choose following options:\n");
        printf("1 = Encrypt the sentence.\n");
        printf("2 = Decrypt the sentence.\n");
	scanf("%d", &y);
	if (x != 1 && x != 2)
	{
		printf("value entered is invalid!!! \n");
		printf("Exiting.....\n");
		return 0;
	}
        if(y==1){
            for(i = 0; i < MAX; i++) {
                if(str[i]=='A' || str[i] == 'a'){ 
                    str[i] ='T';
                } else if (str[i]=='B' || str[i] == 'b'){
                    str[i] ='D';
                } else if (str[i]=='C' || str[i] == 'c'){
                    str[i] ='G';
                } else if (str[i]=='D' || str[i] == 'd'){
                    str[i] ='H';
                } else if (str[i]=='E' || str[i] == 'e'){
                    str[i] ='Y';
                } else if (str[i]=='F' || str[i] == 'f'){
                    str[i] ='Q';
                } else if (str[i]=='G' || str[i] == 'g'){
                    str[i] ='R';
                } else if (str[i]=='H' || str[i] == 'h'){
                    str[i] ='W';
                } else if (str[i]=='I' || str[i] == 'i'){
                    str[i] ='M';
                } else if (str[i]=='J' || str[i] == 'j'){
                    str[i] ='P';
                } else if (str[i]=='K' || str[i] == 'k'){
                    str[i] ='S';
                } else if (str[i]=='L' || str[i] == 'l'){
                    str[i] ='Z';
                } else if (str[i]=='M' || str[i] == 'm'){
                    str[i] ='U';
                } else if (str[i]=='N' || str[i] == 'n'){
                    str[i] ='A';
                } else if (str[i]=='O' || str[i] == 'o'){
                    str[i] ='E';
                } else if (str[i]=='P' || str[i] == 'p'){
                    str[i] ='C';
                } else if (str[i]=='Q' || str[i] == 'q'){
                    str[i] ='X';
                } else if (str[i]=='R' || str[i] == 'r'){
                    str[i] ='J';
                } else if (str[i]=='S' || str[i] == 's'){
                    str[i] ='O';
                } else if (str[i]=='T' || str[i] == 't'){
                    str[i] ='B';
                } else if (str[i]=='U' || str[i] == 'u'){
                    str[i] ='K';
                } else if (str[i]=='V' || str[i] == 'v'){
                    str[i] ='N';
                } else if (str[i]=='W' || str[i] == 'w'){
                    str[i] ='I';
                } else if (str[i]=='X' || str[i] == 'x'){
                    str[i] ='L';
                } else if (str[i]=='Y' || str[i] == 'y'){
                    str[i] ='V';
                } else if (str[i]=='Z' || str[i] == 'z'){
                    str[i] ='F';
                
                }
            }
            printf ("The Encrypted sentence is:\n%s\n", str);
    }

    if(y==2){
            for(i = 0; i < MAX; i++) {
                if(str[i]=='T' || str[i] == 't'){ 
                    str[i] ='A';
                } else if (str[i]=='D' || str[i] == 'd'){
                    str[i] ='B';
                } else if (str[i]=='G' || str[i] == 'g'){
                    str[i] ='C';
                } else if (str[i]=='H' || str[i] == 'h'){
                    str[i] ='D';
                } else if (str[i]=='Y' || str[i] == 'y'){
                    str[i] ='E';
                } else if (str[i]=='Q' || str[i] == 'q'){
                    str[i] ='F';
                } else if (str[i]=='R' || str[i] == 'r'){
                    str[i] ='G';
                } else if (str[i]=='W' || str[i] == 'w'){
                    str[i] ='H';
                } else if (str[i]=='M' || str[i] == 'm'){
                    str[i] ='I';
                } else if (str[i]=='P' || str[i] == 'p'){
                    str[i] ='J';
                } else if (str[i]=='S' || str[i] == 's'){
                    str[i] ='K';
                } else if (str[i]=='Z' || str[i] == 'z'){
                    str[i] ='L';
                } else if (str[i]=='U' || str[i] == 'u'){
                    str[i] ='M';
                } else if (str[i]=='A' || str[i] == 'a'){
                    str[i] ='N';
                } else if (str[i]=='E' || str[i] == 'e'){
                    str[i] ='O';
                } else if (str[i]=='C' || str[i] == 'c'){
                    str[i] ='P';
                } else if (str[i]=='X' || str[i] == 'x'){
                    str[i] ='Q';
                } else if (str[i]=='J' || str[i] == 'r'){
                    str[i] ='R';
                } else if (str[i]=='O' || str[i] == 'o'){
                    str[i] ='S';
                } else if (str[i]=='B' || str[i] == 'b'){
                    str[i] ='T';
                } else if (str[i]=='K' || str[i] == 'k'){
                    str[i] ='U';
                } else if (str[i]=='N' || str[i] == 'n'){
                    str[i] ='V';
                } else if (str[i]=='I' || str[i] == 'i'){
                    str[i] ='W';
                } else if (str[i]=='L' || str[i] == 'l'){
                    str[i] ='X';
                } else if (str[i]=='V' || str[i] == 'v'){
                    str[i] ='Y';
                } else if (str[i]=='F' || str[i] == 'f'){
                    str[i] ='Z';
                
                }
            }
            printf ("The Decrypted sentence is:\n%s\n", str);
    }
    }
    return 0;

}
    
       
