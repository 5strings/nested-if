//
//  main.c
//  nestIfElse
//
//  Created by Eun Jae Lee on 14/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char gen;
    int age;
    
    printf("Enter M for Male and F for Female\n");
    scanf("%c\n", &gen);
    
    printf("Enter Your Age:\n");
    scanf("%d\n",&age);
    
    if (gen == 'M') {
        if (age >= 18) {
            printf("You can enter this site\n");
        } if (age<18) {
            printf("Get out!\n");
        }
    } else {
 
        printf("Sorry, Women are not allowed, Go Home!\n");
    }

    
    return 0;
}
