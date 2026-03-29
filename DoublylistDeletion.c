#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Create initial list
void create() {
    struct Node* a = malloc(sizeof(struct Node));
    struct Node* b = malloc(sizeof(struct Node));
    struct Node* c = malloc(sizeof(struct Node));

    a->data = 10; a->prev = NULL; a->next = b;
    b->data = 20; b->prev = a;    b->next = c;
    c->data = 30; c->prev = b;    c->next = NULL;

    head = a;
}

// Delete from Beginning
void deleteBegin() {
    if (head == NULL) return;

    struct Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
}

// Delete from End
void deleteEnd() {
    if (head == NULL) return;

    struct Node* temp = head;

    if (temp->next == NULL) {
        free(temp);
        head = NULL;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);
}

// Delete from Middle (Position)
void deleteMiddle(int pos) {
    struct Node* temp = head;

    for (int i = 1; i < pos; i++)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}

// Display
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    create();

    display();

    deleteBegin();
    deleteEnd();

    display();
    return 0;
}