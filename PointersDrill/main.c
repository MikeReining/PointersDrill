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
    
    // Demo exercise
    
    int x = 2;
    int y = 4;
    int *pointerY = &y;
    printf("Pointer y initial value is %d\n",*pointerY);
    int *pointerX = &x;
    int *pointerToPointerX = pointerX;
    *pointerY = *pointerX;
    printf("Pointer to Pointer value = %d\n",*pointerToPointerX);
    printf("Pointer y value is now %d\n",*pointerY);
    
    int a = 13;
    int b = 5;
    int c = 10;
    
    // convention, put the star next to the object type to make it clear
    // that if you want to point at the value you use the star later.
    // Otherwise you just use the variable name
    
    int* pInt1 = &a;
    int* pInt2 = &b;
    int* pInt3 = &c;
    int* pInt4 = &c;
    
    printf("Print initial Int values %d, %d, %d\n",a,b,c);
    printf("Print Pointer Values %d %d %d %d\n", *pInt1,*pInt2,*pInt3,*pInt4);
    
    // Double A via pointer
    *pInt1 = *pInt1 * 2;
    printf("intPointer1 = %d; a = %d\n",*pInt1,a);
    // Increment C via pointer
    *pInt3 = *pInt3 + 1;
    printf("intPointer3 = %d; c = %d\n",*pInt3,c);
    // Point one of C pointers to B via B pointer HELP!  Why does this not work?
    pInt4 = pInt2;
    printf("intPointer4 = %d; b = %d\n",*pInt4,b);
    // Add 4 to b via updated Pointer
    *pInt4 = *pInt4 + 4;
    printf("intPointer4 = %d; b = %d\n",*pInt4,b);

    printf("Print initial values after updates %d, %d, %d\n",a,b,c);

    
    printf("Hello, World!\n");
    return 0;
}
