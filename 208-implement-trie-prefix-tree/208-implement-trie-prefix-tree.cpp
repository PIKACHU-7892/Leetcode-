class Trie {
private:
    struct TrieNode{
        struct TrieNode* child[26];
        bool end;
    };
    TrieNode* node;
public:
    Trie() {
        node = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* current = node; 
        for(auto x: word)
        {
if(current->child[x-'a']==NULL)
{
    current->child[x-'a'] = new TrieNode();
}
            current = current->child[x-'a'];
        }
        current->end = true;
    }
    
    bool search(string word) {
        TrieNode * current = node ;
        for(auto x: word )
        {
            if(current->child[x-'a']==NULL)
            {
                return false;
            }
            current = current->child[x-'a'];
        }
        if(current->end == true)
        {
            return true;
        }
        return false ;
    }
    
    bool startsWith(string prefix) {
        TrieNode * current = node ;
        for(auto x: prefix )
        {
            if(current->child[x-'a']==NULL)
            {
                return false;
            }
            current = current->child[x-'a'];
        }
        return true; 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */