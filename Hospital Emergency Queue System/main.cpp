#include <iostream>
using namespace std;
struct Node {
    int id;
    Node* next;
    Node* prev;
  
  Node(int p_id){
    id=p_id;
    next =NULL;
    prev =NULL;
  }
};

class ER{
private:
    Node* head;
    Node* tail;
    
public:
    ER(){
    head =NULL;
    tail =NULL;
}
  ~ER(){
    while(head !=NULL){
      Node* temp =head;
      head =head->next;
      delete temp;
    }
}
    void insertAtBeginning(int id)
    {
    Node* newNode = new Node(id);
    if (head ==NULL) 
    {
      head = tail =newNode;
    } else
    {
      newNode->next =head;
      head->prev =newNode;
      head = newNode;
    }
}
    void insertAtEnd(int id) 
    {
    Node* newNode = new Node(id);
    if (tail ==NULL)
    {
      head = tail =newNode;
    } else
    {
      tail->next =newNode;
      newNode->prev =tail;
      tail = newNode;
    }
}
  
  void insertAtPos(int id, int pos)
    {
    if (pos <=0)
    {
      cout<<"Invalid position"<<endl;
      return;
    }
    if (pos == 1)
    {
      insertAtBeginning(id);
      return;
    }
    Node* newNode = new Node(id);
    Node* current =head;
    int count =1;
    while (current !=NULL && count<pos - 1){
      current =current->next;
      count++;
    }
    if (current ==NULL)
    {
      insertAtEnd(id);
    } else if(current->next ==NULL) 
    {
    insertAtEnd(id);
    } else
    {
      newNode->next =current->next;
      newNode->prev =current;
      current->next->prev = newNode;
      current->next =newNode;
    }
}
  
  bool deleteFromBeginning() 
    {

    if (head ==NULL)
    {
      return false;
    }
    Node* temp =head;
    if (head ==tail)
    {
      head = tail =NULL;
    } else
    {
      head =head->next;
      head->prev =NULL;
    }
    cout<<"Patient discharged " <<temp->id<<endl;
    delete temp;
    return true;
  }
    void display() const{
    if (head ==NULL)
    {
      cout<<"No patient in ER"<<endl;
      return;
    }
    Node* current = head;
    while (current !=NULL)
    {
      cout << current->id;
      if (current->next !=NULL) 
      cout << " <-> ";
      current =current->next;
    }
    cout<<endl;
  }
};

int main()
{
  ER List;
  
  List.insertAtEnd(101);   
  List.insertAtEnd(102);   
  List.insertAtBeginning(200); 
  List.insertAtPos(150,2);
  List.display();
  List.deleteFromBeginning();
  List.insertAtEnd(300);
  List.display();
 return 0;
}
