#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType <int> kiu(5);
    if(kiu.IsEmpty())
        cout<< "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    kiu.Enqueue(5);
    kiu.Enqueue(7);
    kiu.Enqueue(4);
    kiu.Enqueue(2);

    if(kiu.IsEmpty())
        cout<< "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    if(kiu.IsFull())
        cout<< "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    kiu.Enqueue(6);

    QueType <int> backupKiu;
    int item;
    while(kiu.IsEmpty()!=true)
    {
         kiu.Dequeue(item);
         cout << item << " ";
         backupKiu.Enqueue(item);
    }
    cout << endl;

    while(backupKiu.IsEmpty()!= true)
    {
        backupKiu.Dequeue(item);
        kiu.Enqueue(item);
    }

    if(kiu.IsFull())
        cout<< "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    //kiu.Enqueue(8);
    kiu.Dequeue(item);
    kiu.Dequeue(item);

    while(kiu.IsEmpty()!=true)
    {
         kiu.Dequeue(item);
         cout << item << " ";
         backupKiu.Enqueue(item);
    }
    cout << endl;

    while(backupKiu.IsEmpty()!= true)
    {
        backupKiu.Dequeue(item);
        kiu.Enqueue(item);
    }

    kiu.Dequeue(item);
    kiu.Dequeue(item);
    kiu.Dequeue(item);

    if(kiu.IsEmpty())
        cout<< "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    kiu.Dequeue(item);





    return 0;
}
