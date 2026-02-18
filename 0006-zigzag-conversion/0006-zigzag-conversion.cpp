class node {
public:
    char data;
    node* next;

    node(char d) {
        data = d;
        next = NULL;
    }
};

void insert(node*& root, node*& tail, char d) {
    node* temp = new node(d);

    if (root == nullptr) {
        root = tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void display(node* root[], string& ans , int size) {
    for (int a = 0; a < size; a++) {
        node* temp = root[a];
        while (temp != NULL) {

            ans.push_back(temp->data);
            temp = temp->next;
        }
    }
}

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; // edge case

        node* root[numRows];
        node* tail[numRows];

        // Initialize heads and tails ONCE
        for (int i = 0; i < numRows; i++)
            root[i] = tail[i] = nullptr;

        int a = 0;
        while (a < s.length()) {
            // Step 1: go down
            for (int b = 0; b < numRows && a < s.length(); b++, a++) {
                insert(root[b], tail[b], s[a]);
            }
            // Step 2: go up (skip first and last row)
            for (int b = numRows - 2; b >= 1 && a < s.length(); b--, a++) {
                insert(root[b], tail[b], s[a]);
            }
        }

        // Collect all rows into a single string
        string ans;
        for (int i = 0; i < numRows; i++) {
            node* temp = root[i];
            while (temp != nullptr) {
                ans.push_back(temp->data);
                temp = temp->next;
            }
        }

        return ans;
    }
};
