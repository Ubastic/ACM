/**
 * Definition of Input:
 * template<class T>
 * class Input {
 * public:
 *     bool done(); 
 *         // Returns true if the iteration has elements or false.
 *     void next();
 *         // Move to the next element in the iteration
 *         // Runtime error if the iteration has no more elements
 *     T value();
 *        // Get the current element, Runtime error if
 *        // the iteration has no more elements
 * }
 */
class NGramMapper: public Mapper {
public:
    void Map(int n, Input<string>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, int value);
        while (!input->done()) {
            string s = input->value();
            for (int i = 0; i <= s.length() - n; i++) {
                string sub = s.substr(i, n);
                output(sub, 1);
            }
            input->next();
        }
    }
};


class NGramReducer: public Reducer {
public:
    void Reduce(string &key, Input<int>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, int value);
        int count = 0;
        while (!input->done()) {
            count += input->value();
            input->next();
        }
        output(key, count);
    }
};
