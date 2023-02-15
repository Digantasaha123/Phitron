#include <bits/stdc++.h>
using namespace std;
class Node
//class declaration
 
{
    public:
        int value;
        Node *Next;

        // constructor creation
        Node(int val)
        {
            value = val;
            Next = NULL;
        }
    };



void insertAtTail(Node* &head, int val) //update?
{
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode; 
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;

    }
     temp->Next = newNode;
}


 void insertAtHead(Node* &head, int val)
 {
    //Step 1--> new node creation
    Node* newNode = new Node(val);

    //Step 2--> Update newNode-> Next
    newNode ->Next = head;
    //Step 3--> Update head
    head = newNode;
 }


void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
        {
            cout << " -> ";
        }
        n = n->Next;
    }
    cout << endl
         << endl;
}

int main()
{
Node *head = NULL;

int n;

//choice 1  insertion at head 
//choice 2 Insertion at tail
cout<<"choice 1  insertion at head "<<endl;
cout<<"choice 2 Insertion at tail "<<endl<< "choice 3: EXIT"<endl;

char choice = '2';
while(choice == '1'|| choice == '2')

{
    cout<<"Enter the value: ";
    cin>>n;
    insertAtTail(head, n);
    cout<<"Do you Wish to continue ? 'Y'/'N'"<<endl;
    cin>>choice;
}
display(head);
// int n;   
// cout<<"Enter the value : ";


// insertAtTail(head, 1);
// insertAtTail(head, 5);
// insertAtTail(head, 8);
// insertAtTail(head, 9);
//     display(head);

}