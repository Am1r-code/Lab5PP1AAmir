#include <iostream> // Task 1
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int num;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        s.push(num);
    }

    cout << "Stack (Top to Bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}


#include <iostream> // Task 2
#include <stack>
using namespace std;

int main() {
    string input;
    stack<char> s;

    cout << "Enter a string: ";
    cin >> input;

    for (char c : input) {
        s.push(c);
    }

    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}


#include <iostream> // Task 3
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "Enqueue 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        q.push(num);
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}


#include <iostream> // Task 4
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> q;
    string name;

    cout << "Enter 3 names: ";
    for (int i = 0; i < 3; ++i) {
        cin >> name;
        q.push(name);
    }

    while (!q.empty()) {
        cout << "Serving: " << q.front() << endl;
        q.pop();
    }

    return 0;
}


#include <iostream> // Task 5
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_front(10);
    d.push_back(20);
    d.push_front(5);

    cout << "Deque contains: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Pop back: " << d.back() << endl;
    d.pop_back();

    cout << "Pop front: " << d.front() << endl;
    d.pop_front();

    cout << "Remaining: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream> // Task 6
#include <deque>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    deque<char> d;
    for (char c : word) {
        d.push_back(c);
    }

    bool isPalindrome = true;
    while (d.size() > 1) {
        if (d.front() != d.back()) {
            isPalindrome = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }

    if (isPalindrome) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}