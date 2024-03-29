#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#include <iostream>
#include <map>

template <typename T>
struct Node {};

template <>
struct Node<char> {
    bool isWord = false;
    std::map<char, Node<char>*> children = {};

public:
    Node() = default;
    Node(const char& letter, Node<char>* child, const bool& isWord): isWord{isWord} {
        std::pair<char, Node<char>*> p = std::pair<char, Node<char>*>(letter, child);
        children.insert(p);
    }

    friend std::ostream& operator << (std::ostream& os, const Node<char>* n) {
        os << "Node -> " << "Is Word -> " << n->isWord << " First Child -> " << n->children.begin()->first;
        return os;
    }
    ~Node() {
    }
};

template <>
struct Node<std::string> {};


#endif //TRIE_NODE_H
