//
//  main.c
//  PointersDrill
//
//  Created by Michael Reining on 1/14/15.
//  Copyright (c) 2015 Mike Reining. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a = 13;
    int b = 5;
    int c = 10;
    
    int *intPointer1 = &a;
    int *intPointer2 = &b;
    int *intPointer3 = &c;
    int *intPointer4 = &c;
    
    printf("Print initial Int values %d, %d, %d\n",a,b,c);
    printf("Print Pointer Values %d %d %d %d\n", *intPointer1,*intPointer2,*intPointer3, *intPointer4);
    
    // Double A via pointer
    *intPointer1 = *intPointer1 * 2;
    printf("intPointer1 = %d; a = %d\n",*intPointer1,a);
    // Increment C via pointer
    *intPointer3 = *intPointer3 + 1;
    printf("intPointer3 = %d; c = %d\n",*intPointer3,c);
    // Point one of C pointers to B via B pointer HELP!  Why does this not work?
    *intPointer4 = *intPointer2;
    printf("intPointer4 = %d; b = %d\n",*intPointer4,b);
    // Add 4 to b via updated Pointer
    *intPointer4 = *intPointer4 + 4;
    printf("intPointer4 = %d; b = %d\n",*intPointer4,b);

    printf("Print initial values after updates %d, %d, %d\n",a,b,c);

    
    printf("Hello, World!\n");
    return 0;
}
