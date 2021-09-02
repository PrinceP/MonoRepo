#include<vector>

template<typename T>
class Stackvec{
    std::vector<T> stack_vec;
    public:
        void push(T data){
            stack_vec.push_back(data);
        }

        void pop(){
            stack_vec.pop_back();
        }

        bool empty(){
            return stack_vec.size() == 0;
        }

        T top(){
            int lastIdx = stack_vec.size() - 1;
            return stack_vec[lastIdx];
        }
};