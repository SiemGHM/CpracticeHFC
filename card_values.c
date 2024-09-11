/*
Program to evaluate face values of cards.
*/

#include <stdio.h>
#include <stdlib.h>

int sec(){
puts("its gucci mane and his bitch yellow light");
return 0;
}

int main() {
    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]) {
        case 'K':
            
        case 'Q':
            
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
            break;
    }
    printf("The card value is: %i\n", val);
    /*
    if (card_name[0] == 'K') 
        val = 10;
     else if (card_name[0] == 'Q') 
        val = 10;
     else if (card_name[0] == 'J') 
        val = 10;
     else if (card_name[0] == 'A') 
        val = 11;
     else 
        val = atoi(card_name);
    
    printf("The card value is: %i\n", val);
    */
    /*
    Check if value is 3 to 6
    */
    if (val >= 3 && val <= 6)
        puts("Count has gone up");
    /*
    Otherwise check if the card was 10, J, Q, K, or A
    */
    else if (val == 10  )
        puts("Count has gone down");
        
   





    return 0;
}
