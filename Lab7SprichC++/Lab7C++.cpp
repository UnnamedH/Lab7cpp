#include <iostream>
#include <stack> 
#include <queue>
using namespace std;

int getMax(stack<int> s)
{
    int maxVal = s.top();
    while (!s.empty())
    {
        if (s.top() > maxVal)
            maxVal = s.top();
        s.pop();
    }
    return maxVal;
}

stack <int> initStack(stack <int> stack, int k) {
    int  randValue;
    cout << "Все элементы стека: ";
    for (int i = 0; i < k; i++) {//заполнение стека
        randValue = rand() % 10 + 1;
        stack.push(randValue);
        cout << randValue << " ";
    }
    stack.top();
    cout << endl;
    return stack;

}

void EasyLevel(stack <int> stack, int k) {
    cout << "Максимальный элемент стека : " << getMax(initStack(stack, k));
}

void MediumLevel(queue <double> q) {
    q.push(2.1);
    q.push(2.1);
    q.push(5.3);
    cout << "\nТекущая очередь до удаления елемента: " ;
    while (!q.empty()) {
        cout << q.front() <<" ";
        q.pop();
    }
    q.push(2.1);
    q.push(2.1);
    q.push(5.3);
    q.pop();
    q.push(4.9);
    cout << "\nТекущая очередь после удаления елемента: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

}

void HardLevel() {
    queue <double> q1;
    queue <double> q2;
    cout << "\nТекущая очередь нечетных чисел с 1 до 9: ";
    for (int i = 0; i < 10;i++) {
        if (i % 2 != 0) {
            q1.push(i);
            cout << i << " ";
        }
    }
    cout << "\nТекущая очередь  четных чисел с 2 до 10: ";
    for (int i = 2; i < 11; i++) {
        if (i % 2 == 0) {
            q2.push(i);
            cout << i << " ";
        }
    }
    cout << "\nУказатель на последний елемент очереди в q1: " <<&q1.back();
    cout << "\nУказатель на последний елемент очереди в q2: " << &q2.back();
}

int main()
{
    setlocale(LC_ALL, "rus");
    int k = 10;
    stack <int> stack;
    queue <double> q; 
    EasyLevel(stack,k);
    MediumLevel(q);
    HardLevel();

}