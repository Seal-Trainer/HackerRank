#include <iostream>
#define CHAR_NULL (char)0 
using namespace std;

class Node
{
    public:
        char data;
        Node *next;
        Node(char d){
            data=d;
            next=NULL;
        }
};

class Solution {
    Node* head;
    Node* tail;

    public:
    Solution()
    {
        head = NULL;
        tail = NULL;
    }    

    // method that pushes a character onto a stack.
    void pushCharacter(char ch) { 
        Node* character = new Node(ch);
        if(head == NULL){
            tail = character;
            head = tail;
        }
        else
        {
            tail -> next = character;
            tail = character;
        }
        
    }

    // method that enqueues a character in the instance queue variable.
    void enqueueCharacter(char ch) {
        Node* character = new Node(ch);
        if(head == NULL)
        {
            head = character;
            head = tail;
        }
        else 
        {
            character ->next = head;
            head = character;
        }
    }

    char popCharacter() // method that pops and returns the character at the top of the stack instance variable.
    {
        Node* temporal = head;
        char erase_character;
        if(head == NULL) 
        {
            erase_character = CHAR_NULL;
            
        }
        else if (head == tail)
        {
            erase_character = tail->data;
            tail = NULL;
            head = NULL;
        }
        else
        {
            while(temporal->next != tail){
                temporal = temporal->next;
            }
            erase_character = (*tail).data;
            tail = temporal;
            temporal->next =  NULL;
        }
        return erase_character;
    }

    char dequeueCharacter() // method that dequeues and returns the first character in the queue instance variable.
    {
        Node* temporal = head;
        char erase_character;
        if(head == NULL) 
        {
            erase_character = CHAR_NULL;
            
        }
        else if (head == tail)
        {
            erase_character = head->data;
            tail = NULL;
            head = NULL;
        }
        else
        {
            erase_character = head->data;
            head = head->next;
        }
        return erase_character;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}