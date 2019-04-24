#include <stdio.h>
#include <stdlib.h>
#define MAX 1080
#define KEY 23
int main()
{
 int i = 0;
 int x, y;
 char str[MAX];
    
    printf("\nPlease enter a sentence:\t");
    scanf ("%[^\n]s\n", str);//scanning the sentence operation
	printf("\nPlease choose encryption method\n");
    printf("1 = Rotation Encryption\n");
    printf("2 = Substitution Encryption\n");
	scanf("%d", &x);
	
    if(x==1)
    {
        printf("\nPlease choose following options:\n");
        printf("1 = Encrypt the sentence.\n");
        printf("2 = Decrypt the sentence.\n");
        printf("3 = Encrypt the sentecne with key.\n");
        printf("4 = Decrypt the sentence with key.\n");
        scanf("%d", &y);//the term is wether encrypting or decrypting
        if(y==1)
        {
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
              if(str[i] <= 'Z' && str[i] >= 'A')
              {
                  str[i] = 'A' + (str[i]- 'A' + KEY)% 26;
              }
            }
        
            printf("\n The Encrypted sentence: \n%s\n", str);
        }
        if(y==2){
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
                if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]+ 'A' - KEY)% 26;
                }
            }
             printf("\n The decrypted sentence: \n%s\n", str);
        }
        if(y==3){
            int key = 0;
            printf("Please enter the key\n");
            scanf("%d",&key);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
              if(str[i] <= 'Z' && str[i] >= 'A')
              {
                  str[i] = 'A' + (str[i]- 'A' + key)% 26;
              }
            }
        
            printf("\n The Encrypted sentence: \n%s\n", str);
        } 
        if(y==4){
            int key = 0;
            printf("Please enter the key\n");
            scanf("%d",&key);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            {
                if(str[i] <= 'Z' && str[i] >= 'A')
                {
                    str[i] = 'A' + (str[i]+ 'A' - key)% 26;
                }
            }
             printf("\n The decrypted sentence: \n%s\n", str);
            }
        }
    if(x==2){
        printf("\nPlease choose following options:\n");
        printf("1 = Encrypt the sentence.\n");
        printf("2 = Decrypt the sentence.\n");
        scanf("%d", &y);
        
        if(y==1){
            for(i = 0; i < MAX; i++) {
                if(str[i]=='A'){ 
                    str[i] ='T';
                } else if (str[i]=='B'){
                    str[i] ='D';
                } else if (str[i]=='C'){
                    str[i] ='G';
                } else if (str[i]=='D'){
                    str[i] ='H';
                } else if (str[i]=='E'){
                    str[i] ='Y';
                } else if (str[i]=='F'){
                    str[i] ='Q';
                } else if (str[i]=='G'){
                    str[i] ='R';
                } else if (str[i]=='H'){
                    str[i] ='W';
                } else if (str[i]=='I'){
                    str[i] ='M';
                } else if (str[i]=='J'){
                    str[i] ='P';
                } else if (str[i]=='K'){
                    str[i] ='S';
                } else if (str[i]=='L'){
                    str[i] ='Z';
                } else if (str[i]=='M'){
                    str[i] ='U';
                } else if (str[i]=='N'){
                    str[i] ='A';
                } else if (str[i]=='O'){
                    str[i] ='E';
                } else if (str[i]=='P'){
                    str[i] ='C';
                } else if (str[i]=='Q'){
                    str[i] ='X';
                } else if (str[i]=='R'){
                    str[i] ='J';
                } else if (str[i]=='S'){
                    str[i] ='O';
                } else if (str[i]=='T'){
                    str[i] ='B';
                } else if (str[i]=='U'){
                    str[i] ='K';
                } else if (str[i]=='V'){
                    str[i] ='N';
                } else if (str[i]=='W'){
                    str[i] ='I';
                } else if (str[i]=='X'){
                    str[i] ='L';
                } else if (str[i]=='Y'){
                    str[i] ='V';
                } else if (str[i]=='Z'){
                    str[i] ='F';
                
                }
            }
            printf ("The Encrypted sentence is:\n%s\n", str);
    }
    if(y==2){
            for(i = 0; i < MAX; i++) {
                if(str[i]=='T'){ 
                    str[i] ='A';
                } else if (str[i]=='D'){
                    str[i] ='B';
                } else if (str[i]=='G'){
                    str[i] ='C';
                } else if (str[i]=='H'){
                    str[i] ='D';
                } else if (str[i]=='Y'){
                    str[i] ='E';
                } else if (str[i]=='Q'){
                    str[i] ='F';
                } else if (str[i]=='R'){
                    str[i] ='G';
                } else if (str[i]=='W'){
                    str[i] ='H';
                } else if (str[i]=='M'){
                    str[i] ='I';
                } else if (str[i]=='P'){
                    str[i] ='J';
                } else if (str[i]=='S'){
                    str[i] ='K';
                } else if (str[i]=='Z'){
                    str[i] ='L';
                } else if (str[i]=='U'){
                    str[i] ='M';
                } else if (str[i]=='A'){
                    str[i] ='N';
                } else if (str[i]=='E'){
                    str[i] ='O';
                } else if (str[i]=='C'){
                    str[i] ='P';
                } else if (str[i]=='X'){
                    str[i] ='Q';
                } else if (str[i]=='J'){
                    str[i] ='R';
                } else if (str[i]=='O'){
                    str[i] ='S';
                } else if (str[i]=='B'){
                    str[i] ='T';
                } else if (str[i]=='K'){
                    str[i] ='U';
                } else if (str[i]=='N'){
                    str[i] ='V';
                } else if (str[i]=='I'){
                    str[i] ='W';
                } else if (str[i]=='L'){
                    str[i] ='X';
                } else if (str[i]=='V'){
                    str[i] ='Y';
                } else if (str[i]=='F'){
                    str[i] ='Z';
                
                }
            }
            printf ("The Decrypted sentence is:\n%s\n", str);
    }
    return 0;
}

    
       
