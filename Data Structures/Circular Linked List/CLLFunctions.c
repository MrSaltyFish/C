#include <stdio.h>
#include <stdlib.h>

//------Basic Structure------
struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;

//------- Creating a node in memory and returning its pointer -------
NODE createNode()
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = 0;
    temp->next = NULL;
    return temp;
}

//------


//------- Circular Linked List Menu ------
void printMenuCLL()
{
    printf("1. Add a node at the beginning of CLL");
    printf("\n2. Add a node at the end of CLL");
    printf("\n3. Add a node at the specified position in CLL");
    printf("\n4. Delete a node in the beginning of CLL");
    printf("\n5. Delete a node in the end of CLL");
    printf("\n6. Delete a node at the specified position in CLL");
    printf("\n7. Print the Linked List");
    printf("\n0. Exit the program");
    printf("\n\nEnter your choice : ");
}

//======= (MAIN Function) =======
int main()
{
    NODE head = NULL;
    int userChoice = 1;
    int data = 0;
    int position = 0;
    while (userChoice)
    {
        printMenuCLL();
        scanf("%d", &userChoice);
        switch (userChoice)
        {
        case 0:
            return 0;

        case 1:
            printf("Enter input data : ");
            scanf("%d", &data);
            head = insertAtBeginCLL(head, data);
            printf("\n");
            break;
        case 2:
            printf("Enter input data : ");
            scanf("%d", &data);
            head = insertAtEndCLL(head, data);
            printf("\n");
            break;
        case 3:

            printf("Enter input data : ");
            scanf("%d", &data);
            printf("Enter position to insert data : ");
            scanf("%d", &position);
            if (position == 1)
            {
                head = insertAtBeginCLL(head, data);
            }
            else
            {
                head = insertAtPositionCLL(head, data, position);
            }
            printf("\n");
            break;
        case 4:
            head = deleteAtBeginCLL(head);
            break;
        case 5:
            head = deleteAtEndCLL(head);
            break;
        case 6:
            printf("Enter position to delete data : ");
            scanf("%d", &position);
            if (position == 1)
            {
                head = deleteAtBeginCLL(head);
            }
            else
            {
                head = deleteAtPositionCLL(head, position);
            }
            break;
        case 7:
            if (head == NULL)
            {
                printf("CLL is empty.\n\n");
            }
            else
            {
                printCLL(head);
            }
            break;
        case 8:
            if (head == NULL)
            {
                printf("CLL is empty.\n\n");
            }
            else
            {
                printCLL(head);
            }
        default:
            printf("Incorrect input, please try again.\n\n");
            break;
        }
    }
    return 0;
}