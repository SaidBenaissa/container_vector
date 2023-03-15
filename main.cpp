#include <iostream>
#include <vector>


int main() {
    std::cout << "STL vector container manipulation" << std::endl;
    // initialize a vector /* front, , ... , back */
    std::vector<int> v1 = {1, 2, 3, 4, 5};

    // Accessing elements using operator[]
    std::cout << "Element at 2nd position using operator[] : " << v1[2] << std::endl;

    // Accessing elements using at()
    std::cout << "Element at 2nd position using at() : " << v1.at(2) << std::endl;

    // Accessing first element using front()
    std::cout << "First element using front() : " << v1.front() << std::endl;

    // Accessing last element using back()
    std::cout << "Last element using back() : " << v1.back() << std::endl;

    // Mofify the element at 2nd position 1 2 30 4 5
    v1[2] = 30;
    std::cout << "Element at 2nd position using operator[] after modification: " << v1[2] << std::endl;

    // insert an element at 2nd position 1 3 100 30 4 5
    v1.insert(v1.begin() + 2, 100);
    std::cout << "Element at 2nd position using operator[] after insertion: " << v1[2] << std::endl;

    // erase an element at 2nd position 1 3 30 4 5
    v1.erase(v1.begin() + 2);
    std::cout << "Element at 2nd position using operator[] after erasure: " << v1[2] << std::endl;


    // push_back() to insert element at the end 1 3 30 4 5 6
    v1.push_back(6);
    std::cout << "Insert element at the end using push_back() : " << v1.back() << std::endl;

//    for(std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
//        std::cout << *it << " ";
//    }

    // pop_back() to delete element at the end 1 3 30 4 5
    v1.pop_back();
    std::cout << "Delete element at the end using pop_back() : " << v1.back() << std::endl;

//    for (auto v: v1) {
//        std::cout << v << " ";
//    }

    // empty() to check if the vector is empty
    if (v1.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    // size() to get the size of the vector 1 3 30 4 5
    std::cout << "Size of the vector is : " << v1.size() << std::endl;

    // capacity() to get the size of the storage space currently allocated to the vector
    std::cout << "Capacity of the vector is : " << v1.capacity() << std::endl;

    // reserve() to request that the vector capacity be at least enough to contain n elements
    v1.reserve(10);
    std::cout << "Capacity of the vector is : " << v1.capacity() << std::endl;


    // resize() to change the size of the vector
//    v1.resize(12);
//    std::cout << "Size of the vector is : " << v1.size() << std::endl;

    // clear() to remove all elements from the vector
//    v1.clear();
//    std::cout << "Size of the vector is : " << v1.size() << std::endl;

    for(auto &v: v1) {
        std::cout << v << " ";
    }




    return 0;
}
