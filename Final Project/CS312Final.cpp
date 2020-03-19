#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
//#include "FP labeledGraph.cpp"
using namespace std;

/* Constants */
const in Alpha_Length = 26;

/* Prototypes */
void getWords(string &word1, string &word2);
void printWordLadder(string word1, string word2);

/* Main Function */
int main() {
  string word1, word2;
  getWords(word1, word2);
  printWordLadder(word1, word2);

  return 0;
}

// This function takes two strings as parameter
// prompts the user for the imput and stors the answer in the parameters.
void getWords(string &word1. string &word2) {
  while(true) {
    cout << "Please enter the start word? ";
    cin >> word1;

    cout << "Please enter the destiniation word that you want to reach? ";
    cin >> word2;

    if(word1.length() == word2.length()) {
      break;
    }

    cout << "Please enter the two words with the same period?" << endl;
  }
}

// Function: printWordLadder
// This function takes two strings as a parameters and prints the word ladder between two words.
// a word ladder is from one word to another formed by changing one letter at a time with the Constraint.

void printWordLadder(string word1, string word2) {
  // a empty queue of stacks
    queue <stack <string> > myQueue;
    stack <string> wordladder;

  // creates and adds a stack containing word1 to the queue
    stack <string> myStack;
    myStack.push(word1);
    myQueue.push(myStack);

// two sets: one for the dictionary and other one for the tested getWords
    string token;
    ifstream file("english_words.txt");
    set <string> myDictionary;
    set <string> testedWords;

    if(dictionary.is_open()) {
        while(dictionary >> token) {
        myDictionary.insert(token);
    }

    // the queue is not empty
        while(!(myQueue.empty()) {
  // the partial-ladder stack from the front of the queue
      stack <string> ladder = myQueue.front();
      myQueue.pop();
      string word = ladder.top();

  // if the word on the top of the stack is the destiniation word
      if(word == word2) {
    // the output of the elements of the stack is the solution
        cout << "The Ladder from " << word1 << " to " << word2 << " is \n";

        while(!ladder.empty()) {
          wordladder.push(ladder.top());
          ladder.pop();
    }

    while(!wordladder.empty()) {
      cout << wordladder.top() << " > ";
      wordladder.pop();
    }
  }
  else {
    // each word (differes by 1 letter) ofthe word on the top of the stack
      string test;
      for(int i = 0; i < word.size(); i++) {
        for(char j = 'a'; j <= 'z'; j++) {
        test = word.substr(0, i) + j + word.substr(i + 1);

        // if the word is an english word
        if(myDictionary.count(test)) {

          // if that word has not already been used in the ladder before
          if(!testedWords.count(test)) {
            // create a copy of the current ladder stack
          stack <string> copy = ladder;

            // put the word on the top of the copy stack.
          copy.push(test);

            // add the copy stack to the end of the queue.
          myQueue.push(copy);
          }
        }

        // check and tested the words and see if the words because it is already used.
        testedWords.insert(test);
      }
    }
      }
    }
  } else {
    cout << "Cannot open the english_words" << endl;
  }
}
