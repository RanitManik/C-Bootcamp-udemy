// Writing a C program uses Structure Pointers and Functions

#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int qty;
    float price;
    float amount;
};

void readItem(struct item *i);

void printItem(const struct item *i);  // Declare as const since it doesn't modify the struct

int main() {
    struct item itm = {NULL, 0, 0.0, 0.0};
    struct item *pItem = NULL;

    pItem = &itm;

    pItem->itemName = (char *) malloc(30 * sizeof(char));

    if (pItem == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // read item
    readItem(pItem);

    // print item
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item *i) {
    printf("Enter product name: ");
    scanf("%29s", i->itemName);  // Limit input size to prevent buffer overflow

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float) i->qty * i->price;
}

void printItem(const struct item *i) {
    /*print item details*/
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %.2f", i->price);
    printf("\nQuantity: %d", i->qty);
    printf("\nTotal Amount: %.2f\n", i->amount);
}
