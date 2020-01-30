#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void is_present(char word[],char guess,char guess_word[]);
int has_won(int length,char guess_word[]);
int chances_Remaining(char word[],char guess,int length);
int warning_Remaining(char word[],char guess);
void available_chars(char all_Guess[] ,char alphabets[]);
int main()
{
    srand(time());
    char random_word_list[10][20]={"apple","application","output","general","message","test","result","compile","debugger","console"};

    char random_word[20],user_Guess[20]={},current_Guess,all_guess[20]={},alphabets_rem[]="abcdefghijklmnopqrstuvwxyz";
 strcpy(random_word,random_word_list[rand()%10]);
    int word_length=strlen(random_word),chances=6,warnings=3,counter=0;
    printf("length of the word is: %d\n",word_length);
    for(int i=0;i<word_length;i++){
        user_Guess[i]='_';
    }
        printf("Available alphabets are %s \n",alphabets_rem);
    printf("You have %d warnings left.\n",warnings);
    printf("You have %d chances left.\n",chances);
    while(chances>0 && warnings>0){
        do{
            printf("Enter a character. ");
            scanf(" %c",&current_Guess);
            all_guess[counter]=current_Guess;
            counter++;
             available_chars(all_guess,alphabets_rem);
        }while(current_Guess<'a' || current_Guess>'z');
        is_present(random_word,current_Guess,user_Guess);
        warnings-=warning_Remaining(all_guess,current_Guess);
       printf("You have %d warnings left.\n",warnings);
        if(warning_Remaining(all_guess,current_Guess)){
        }else{
            chances-=chances_Remaining(random_word,current_Guess,word_length);
        }
            if(has_won(word_length,user_Guess)){
            break;
        }else{
            printf("You have %d chances left.\n",chances);
        }
    }
    if(has_won(word_length,user_Guess)){
    printf("\nCongratulation you have won the game.\n");
    }else{
        printf("\nYou Lose.\n");
    }
    return 0;
}
void is_present(char word[],char guess,char guess_word[]){
    for(int i=0;i<strlen(word);i++){
        if(word[i]==guess){
            guess_word[i]=guess;
        }
    }
    printf("%s\n\n",guess_word);
}
int has_won(int length,char guess_word[]){
    for(int i=0;i<length;i++){
        if(guess_word[i]=='_'){
            return 0;
        }
    }
    return 1;
}
int chances_Remaining(char word[],char guess,int length){
    int chance=1;
    if(guess=='a' || guess=='e' ||guess=='i'||guess=='o'||guess=='u'){
        chance=2;
    }
    for(int i=0;i<length;i++){
        if(guess==word[i]){
            chance=0;
        }
    }
    return chance;
}
void available_chars(char all_Guess[] ,char alphabets[]){
    int check=1;
    for(int i=0;i<27;i++){
        for(int j=0;j<strlen(all_Guess);j++){
        if(alphabets[i]==all_Guess[j]){
            check=0;
        }
        }
        if(check==1){
            printf("%c",alphabets[i]);
        }
        check=1;
    }
    printf("\n\n");
}
int warning_Remaining(char word[],char guess){
    int counter=0;
    for(int i=0;i<strlen(word)-1;i++){
        if(guess==word[i]){
            counter=1;
        }
    }
    return counter;
}
