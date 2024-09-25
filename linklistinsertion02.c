 #include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

struct node {
    int data;
    struct node* next;
};


struct node * insertatend(struct node* head) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the new node that you want to insert at end : ");
    scanf("%d" , &newnode -> data);
    newnode -> next = NULL; 
    struct node * temp = head ; 
    while(temp -> next != NULL){
        temp = temp -> next ; 
    }
    temp -> next = newnode ; 
    return head ; 
    
}

int main() {
    int n;
    printf("Enter the number of nodes you want to insert in the linked list: ");
    scanf("%d", &n);

    struct node* head = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the first node of the linked list: ");
    scanf("%d", &head->data);
    head->next = NULL;
    struct node* temp = head;

    int cnt = 1;
    while (cnt < n) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the new node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
        cnt++;
    }

    printf("Here is our linked list:\n");

    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    
     head = insertatend(head);

    printf("New linked list after the insertion:\n");

    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}