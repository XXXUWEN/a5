//
//  main.c
//  a5
//
//  Created by xuwen nie on 15/10/22.
//  Copyright © 2015年 xuwen nie. All rights reserved.
//

#ifndef _common_h_
#define _common_h_
typedef struct test_type_t{
    int compare_number;
    int position;
};

struct test_type_t test_type_t;


/* Return <0 if first is before second, return 0 if first and second
 are the same, return > 0 if first is after second. */


int compare( struct test_type_t *first, struct test_type_t *second ){
    if(first->position<second->position){
        return -1;
    }else if(first->position == second->position){
        return 0;
    }else{
        return 1;
    }
    
};
#endif

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    return 0;
}
