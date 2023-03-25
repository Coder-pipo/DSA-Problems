#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
     Node(int data){
        this->data=data;
        next=NULL;
     }
};

Node* push(Node *head,int val){
    Node *temp=new Node(val);
    Node *temp1=head;
    if(head==NULL){
        head=temp;
        return head;
    }

    while(temp1->next!=NULL){
     temp1=temp1->next;
    }

     temp1->next=temp;
    return head;
}

void display(Node *head){
     Node *temp=head;
     while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
     }

     cout<<"NULL"<<"\n";
}

bool search(Node *head,int x){
    Node *temp=head;
    if(temp==NULL){
          return false;
    }

    return (temp->next,x);
}

int main() {
	Node *head=NULL;
	int n;
	cout<<"Enter no. of nodes: ";
	cin>>n;
	while(n--){
	    int x;
	    cout<<"Enter value of new node: ";
	    cin>>x;
	     head=push(head,x);
	}
	
     display(head);

	cout<<"Enter value to be searched: "<<"\n";
	int val;
	cin>>val;
	if(search(head,val))
          cout<<"YES"<<"\n";

     else
          cout<<"NO"<<"\n";
	
	return 0;
}
