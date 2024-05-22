#include <iostream>
using namespace std;

//factorial recursion

int factorial(int n){
    //base case
    if(n == 1){
        return n;
    }

    //recursion step
    return n * factorial(n - 1);

    //n * (n - 1) * (n - 2) * (n - 3).... (1)

    //n * factorial(n - 1)
            //-> n - 1  * (factorial (n - 2))
}

struct Node{
    int val;
    Node* next;
};

//linked lists
void printLL(Node* head){
    //base case
    if(head == NULL){
        return;
    }

    //recursion step
    printLL(head->next);
    cout<<head->val<<endl;
    return;
}

//1st = 0
//2nd = 1
//3rd = 1
//4th = 2
//5th = 3

int fib(int n){
    //base case
    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    //recursion
    return fib(n - 1) + fib(n - 2);

}

//fib (5) = fib(4) + fib(3)
//fib (4) = fib(3) + fib(2)
//fib (4) = fib(2) + fib(1) + fib(2)
//fib (3) = fib(2) + fib(1)
