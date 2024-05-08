#include <iostream>
#include <climits>
#include <stack>
using namespace std;

class StackUsingArray {
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalSize) {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    void push(int element) {
        if (nextIndex == capacity) {
            cout << "Stack full " << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty " << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty " << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;

}

