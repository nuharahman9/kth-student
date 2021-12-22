#include <iostream> 
#include <vector> 
#include <map>
using namespace std; 
 
int main() { 
    vector<int> scores; 
    map<int, int> ordered_scores; 
    int sz, temp, query = 0;
    cin >> sz; 
    for (unsigned int i = 0; i < sz; ++i) { 
        cin >> temp; 
        if (ordered_scores[temp]) { 
            continue;    
        }    else { 
            ordered_scores[temp] = 0;    
        }    
    }
    
    for (auto it = ordered_scores.rbegin(); it != ordered_scores.rend(); ++it) { 
        scores.push_back(it->first); 
        
    }
    cin >> sz; 
    for (unsigned int i = 0; i < sz; ++i) { 
        cin >> temp; 
        cout << scores[temp-1]; 
        if (i != sz-1) { 
            cout << endl; 
        }    
    }
 
 
    return 0; 
}  