// Insertion at beginning, middle and end 
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;  // stores data element
    struct Node* next ;  // stores address of pointer 
};

struct Node* head = NULL; // creation of head 

// Insert at beginning 
void insertBegin(int x) {
    struct Node* newNode = malloc(sizeof(struct Node));   // return memory space 
    newNode -> data =x;  // store data element 
    newNode -> next = head;  // new node becomes head 
    head = newNode;
}


// insert at middle 
void create() {
    struct Node* a = malloc(sizeof(struct Node));
    struct Node* b = malloc(sizeof(struct Node));  // temp linked list 
    struct Node* c = malloc(sizeof(struct Node));

    a -> data = 10; a -> next = b; // values 
    b -> data = 20; b -> next = c;
    c -> data = 30; c -> next = NULL;

    head = a;
}

void insertMiddle(int x, int pos) {
    struct Node* newNode = malloc(sizeof(struct Node));  // malloc return memory space 

    newNode -> data = x;   // newnode data 
    struct Node* temp = head;
    for(int i=1;i<pos-1;i++){  // runs until entered position is found 
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;     // update pointer 
}

// Insert at last 
void insertEnd(int x) {
        struct Node* newNode = malloc(sizeof(struct Node));  
        newNode -> data =x;
        newNode -> next = NULL ;

        if(head == NULL) {
            head = newNode;
            return ;
        }

        struct Node* temp = head;
        while(temp -> next != NULL) {  // temp variable for traversing 
            temp = temp -> next;
        }
        temp -> next = newNode;
}

//display the linked list 
void display() {       // fucntion to dispaly linked listy 
    struct Node* temp = head;
    while(temp != NULL){    // if linked is not empty then we will print element
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");    //if empty NULL is printed 
}

int main() {
    insertBegin(10);
    insertBegin(20);
    insertBegin(30);  // function call to insert element at beginning 

    insertEnd(10);
    insertEnd(20);
    insertEnd(30); // fucntion call to insert element at last 
    insertEnd(60);
    insertEnd(40);

    create();
    insertMiddle(15,2);   // function call to insert element in middle 

    display();

    return 0;
}