#include <iostream>
using namespace std;

// TrainCar struct for both linked list and binary search tree
struct TrainCar {
    int data;
    TrainCar* next; // for linked list
    TrainCar* left; // for binary search tree
    TrainCar* right; // for binary search tree

    TrainCar(int d) : data(d), next(nullptr), left(nullptr), right(nullptr) {}
};

// Linked list implementation
class LinkedList {
private:
    TrainCar* head;
public:
    LinkedList() : head(nullptr) {}

    void insert(int data) {
        TrainCar* newNode = new TrainCar(data);
        if (!head) {
            head = newNode;
        } else {
            TrainCar* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        TrainCar* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};
