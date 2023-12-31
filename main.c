//
//  main.c
//  14_P3
//
//  Created by ok sojoung on 2023/12/07.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
    int number;
    char title[10];
};

int main(void) {
    int i;
    struct Book**bookshelf;
    
    bookshelf = (struct Book**)malloc(sizeof(struct Book*));
    for(i=0;i<3;i++)
        bookshelf[i]=(struct Book*)malloc(10*sizeof(struct Book));
        
    bookshelf[1][3].number = 5;
    strcpy(bookshelf[1][3].title, "C++Programming");
    
    (bookshelf[2]+4)->number = 3;
    strcpy((bookshelf[2]+4)->title, "Communications Theory");
    
    printf("book(1,3): %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
    printf("book(2,4): %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
    
    for(i=0;i<3;i++)
        free(bookshelf[i]);
    
    free(bookshelf);
    return 0;
}
