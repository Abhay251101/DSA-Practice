// Deletion from beginning,end and middle from linked list 
#include<stdio.h>
#include<stdlib.h>  // include header file 

struct Node {
    int data;    // creation of node 
    struct Node* next;
};

struct Node* head = NULL; //create head 
void create() {
    struct Node* a = malloc(sizeof(struct Node));
    struct Node* b = malloc(sizeof(struct Node)); // creating an initial list 
    struct Node* c = malloc(sizeof(struct Node));

    a -> data = 10; a -> next = b;
    b -> data = 20; b -> next = c;  // adding data into the list 
    c -> data = 30; c -> next = NULL;

    head = a;
}

//delete from begin 
void deleteBegin() {      // function to delete element from beginning 
    struct Node* temp = head;
    head = head -> next;
    free(temp);
}

//delete from middle
void deleteMiddle(int pos) {
    struct Node* temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
}


//delete from End
void deleteEnd() {     
    struct Node* temp = head;
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;
}

//display function 
void display() {
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main() {
    create();
    printf("Original list is\n");
    display();

    // deleteBegin();
    // deleteEnd();
    deleteMiddle(2);

    printf("After deletion\n");
    display();
    return 0;

}