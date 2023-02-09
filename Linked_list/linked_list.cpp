#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
    int value;
    Node* Next;
}
void display(Node* n){

}
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head -> value=1;
    second -> value = 5;
    third -> value = 4;
    fourth -> value = 9;


    head ->Next = second;
    second ->Next = third;
    third ->Next = fourth;
    fourth -> = NULL;

    display(Head);

    return 0;
}