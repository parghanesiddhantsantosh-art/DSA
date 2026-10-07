#include <iostream>
using namespace std;

class Queue
{
public:
    int A[6];
    int rear;
    int front;

    Queue()
    {
        front = -1;
        rear = -1;
    }

    // a. Enqueue student token number
    void enQueue(int token)
    {
        if (rear == 5)
        {
            cout << "The admission queue is overflow" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        A[rear] = token;

        cout << "Student token number " << token
             << " added to the admission queue." << endl;
    }

    // b. Dequeue and display student processes
    void deQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "The admission queue is underflow" << endl;
            return;
        }

        cout << "Student with token number " << A[front]
             << " is being processed for admission." << endl;

        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    // c. Display front and rear token number
    void displayFrontRear()
    {
        if (front == -1 || front > rear)
        {
            cout << "The admission queue is empty" << endl;
            return;
        }

        cout << "Front token number: " << A[front] << endl;
        cout << "Rear token number: " << A[rear] << endl;
    }

    // d. Display complete queue
    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "The admission queue is empty" << endl;
            return;
        }

        cout << "Complete Admission Queue:" << endl;

        for (int i = front; i <= rear; i++)
        {
            cout << "Student Token Number: " << A[i] << endl;
        }
    }
};

int main()
{
    Queue q;
    int choice;
    int token;

    do
    {
        cout << "\n----- STUDENT ADMISSION QUEUE -----" << endl;
        cout << "1. Enqueue Student Token Number" << endl;
        cout << "2. Dequeue and Process Student" << endl;
        cout << "3. Display Front and Rear Token Number" << endl;
        cout << "4. Display Complete Queue" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter student token number: ";
            cin >> token;
            q.enQueue(token);
            break;

        case 2:
            q.deQueue();
            break;

        case 3:
            q.displayFrontRear();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Program ended." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}

