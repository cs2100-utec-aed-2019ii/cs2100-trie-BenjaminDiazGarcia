#include <iostream>

#include "Trie.h"

using namespace std;

int main() {

    Trie<string> trie;

    trie.insert("skere");
    trie.insert("pla");
    trie.insert("alaraco");
    trie.insert("alharaco");

    for (auto& [letter, child]: trie.root->children)
        cout << letter << "\n";

    cout << trie.searchWord("pla") << endl;
    cout << trie.searchPrefix("ala") << endl;

    trie.print();

    return 0;
}