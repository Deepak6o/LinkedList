#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;

        //constructor
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
        //destructor

        ~Node(){
            int value = this->data;
            //memory free
            if(this->next!=NULL)
            {
                delete next;
                this->next=NULL;
            }
        }

};
void insertAtHead(Node *&head, int data)
{
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node * &tail, int data)
{
    Node *temp =new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node *&head,Node * &tail,int postion,int data)
{
    //Insert at start
    if(postion==1)
    {
        insertAtHead(head,data);
        return;
    }
    Node *temp = head;
    int count=1;
    while(count<postion-1)
    {
        temp=temp->next;
        count++;
    }
     // insert at last;
     if(temp->next==NULL)
     {
         insertAtTail(tail,data);
         return;
     }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void deletion(Node* &head,int position)
{
    //Starting Node
    if(position==1)
    {
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deletion at given position and last
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;

    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,14);
    print(head);
    insertAtTail(tail,16);
    print(head);
    insertAtPosition(head,tail,5,15);
    print(head);
    deletion(head, 5);
    print(head);
}

