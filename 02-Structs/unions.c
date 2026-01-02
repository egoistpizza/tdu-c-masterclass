#include <stdio.h>
#include <string.h>

union Kimlik {
    int isbn;
    char barkod[10];
};

int main() {
    union Kimlik k;
    
    k.isbn = 12345;
    printf("ISBN: %d\n", k.isbn);
    
    strcpy(k.barkod, "ABC-99");
    
    printf("ISBN (Bozuk): %d\n", k.isbn);
    printf("Barkod: %s\n", k.barkod);
    
    return 0;
}
