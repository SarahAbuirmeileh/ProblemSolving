/*
    function topKFrequent(words, k):
    // Step 1: Initialize a map to store word frequencies
    create a map called m

    // Step 2: Count the frequency of each word
    FOR each word in words:
        IF word is not in m:
            ADD word to m with count 1
        ELSE:
            INCREMENT the count of word in m

    // Step 3: Define a custom comparator for sorting
    DEFINE comparator function(a, b):
        IF a.frequency == b.frequency:
            RETURN a.word < b.word  // Lexicographically smaller word first
        ELSE:
            RETURN a.frequency > b.frequency  // Higher frequency first

    // Step 4: Use a priority queue to store words based on frequency
    CREATE a max heap priorityQueue with comparator

    // Step 5: Insert elements from the map into the priority queue
    FOR each entry in m:
        PUSH (entry.frequency, entry.word) into priorityQueue

    // Step 6: Extract the top K elements
    CREATE a list called result
    FOR i FROM 1 TO k:
        ADD the word from the top of priorityQueue to result
        REMOVE the top element from priorityQueue

    // Step 7: Return the result list
    RETURN result
*/

class Solution {
public:
    // Custom comparator struct for sorting pairs
    struct compare {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
            // If frequencies are equal, sort by lexicographical order (smaller first)
            if (a.first == b.first) {
                return a.second > b.second; 
            }
            // Otherwise, sort by frequency (higher first)
            return a.first < b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        // Step 1: Create a map to store the frequency of each word
        map<string, int> m;
        for (string n : words) {
            m[n]++;
        }

        // Step 2: Create a priority queue (max heap) using the custom comparator
        priority_queue<pair<int, string>, vector<pair<int, string>>, compare> pq;

        // Step 3: Push all the word-frequency pairs into the priority queue
        for (auto mm : m) {
            pq.push({mm.second, mm.first});
        }

        // Step 4: Extract the top K frequent words from the priority queue
        vector<string> ans;
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        // Step 5: Return the list of top K frequent words
        return ans;
    }
};
