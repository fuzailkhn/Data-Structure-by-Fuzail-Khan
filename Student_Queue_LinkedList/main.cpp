#include <iostream>
using namespace std;

struct Node {
    int ID;
    string name;
    Node* next;
   
    Node(int val, string nam)
    {
        name = nam;
        ID = val;
        next = nullptr;
    }
};

class LinkedList 
{
    Node* head;

    public:
    int length;

    LinkedList()
    {
        head = nullptr;
        length = 0;
    }

void add_student()
{
    int id;
    string name;

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Student ID: ";
    cin >> id;

    Node* NNode = new Node(id, name);

    if (head == nullptr)
    {
        head = NNode;
    }
    else
    {
        Node* curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = NNode;
    }
    length++;
    cout << "Student " << name << " added to the queue." << endl;
}

    void serve_student()
    {
        if (head == nullptr)
        {
            cout << "List Is Empty.....!" << endl;
            return;
        }

        Node* curr = head;
        cout << "Student " << curr->name << " Served.....!" << endl;
        head = curr->next;
        delete curr;
        length--;
    }

    void leave_student(int id)
    {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->ID == id) {
            Node* to_delete = head;
            head = head->next;
            delete to_delete;
            if (length > 0) 
            {
                length--;
            }
            return;
        }

        Node* prev = head;
        Node* node = head->next; 

        while (node != nullptr && node->ID != id) {
            prev = node;
            node = node->next;
        }

        if (node == nullptr) {
            cout << "Student not found" << endl;
            return;
        }

        prev->next = node->next;
        delete node;
        length--;
    }
    
    void display_queue()
    {
        if (head == nullptr)
        {
            cout << "List Is Empty.....!" << endl;
            return;
        }

        cout << endl << "Current Queue:" << endl;
        Node* curr = head;
        while (curr != nullptr)
        {
            cout << "Student Name: " << curr->name << endl;
            cout << "Student ID: " << curr->ID << endl;
            cout << "------------------------" << endl;
            curr = curr->next;
        }
    }

    void count_students()
    {
        cout << "Total Students in Queue: " << length << endl;
    }
};

int main() {
    LinkedList queue;
    int choice;

    while (true) {
        cout << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Serve Student" << endl;
        cout << "3. Student Leaves (by ID)" << endl;
        cout << "4. Display Queue" << endl;
        cout << "5. Count Students" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) 
        {
            queue.add_student();
        } 
        else if (choice == 2) 
        {
            queue.serve_student();
        } 
        else if (choice == 3) 
        {
            int id;
            cout << "Enter Student ID to remove: ";
            cin >> id;
            queue.leave_student(id);
        } 
        else if (choice == 4) 
        {
            queue.display_queue();
        } 
        else if (choice == 5) 
        {
            queue.count_students();
        } 
        else if (choice == 6) 
        {
            cout << "Exiting program." << endl;
            break;
        } 
        else 
        {
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    return 0;
}
