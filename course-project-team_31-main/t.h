#ifndef TRIE_H
#define TRIE_H

#define MAX_ASCII 128  // Maximum number of ASCII characters

// TrieNode structure for the Trie data structure
typedef struct TrieNode {
    struct TrieNode* children[MAX_ASCII];  // Array of pointers to children, one for each ASCII character
    int server_index;                      // Index of the storage server, -1 if none assigned
} TrieNode;

// Function to create a new Trie node
TrieNode* createTrieNode();

// Function to insert a path into the Trie, associated with a server index
void insertTrie(TrieNode* root, const char* path, int server_index);

// Function to search for a path in the Trie, returning the associated server index or -1 if not found
int searchTrie(TrieNode* root, const char* path);

// Helper function to print all paths and their associated server indices in the Trie
void printTrie(TrieNode* root);

// Recursive helper to release allocated memory in the Trie
void freeTrie(TrieNode* root);

void deleteTrie(TrieNode* root, const char* path);

#endif // TRIE_H
