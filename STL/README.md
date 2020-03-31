# SOME IMPORTANT FUNCTIONS OF STL - C++

### Algorithm Library | C++ Magicians STL Algorithm
- For all those who aspire to excel in competitive programming, only having a knowledge about containers of - STL is of less use till one is not aware what all STL has to offer.
- STL has an ocean of algorithms, for all < algorithm > library functions : Refer here.

- Some of the most used algorithms on vectors and most useful one’s in Competitive Programming are mentioned as follows :

## Non-Manipulating Algorithms

### SORT, REVERSEM MAX_ELEMENT, MIN_ELEMENT, ACCUMULATE
```
sort(first_iterator, last_iterator) – To sort the given vector.

reverse(first_iterator, last_iterator) – To reverse a vector.

*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.

*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.

accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
```

```c++
brightness_4
// A C++ program to demonstrate working of sort(), 
// reverse() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <numeric> //For accumulate operation 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {10, 20, 5, 23 ,42 , 15}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Vector is: "; 
    for (int i=0; i<n; i++) 
        cout << vect[i] << " "; 
  
    // Sorting the Vector in Ascending order 
    sort(vect.begin(), vect.end()); 
  
    cout << "\nVector after sorting is: "; 
    for (int i=0; i<n; i++) 
       cout << vect[i] << " "; 
  
    // Reversing the Vector 
    reverse(vect.begin(), vect.end()); 
  
    cout << "\nVector after reversing is: "; 
    for (int i=0; i<6; i++) 
        cout << vect[i] << " "; 
  
    cout << "\nMaximum element of vector is: "; 
    cout << *max_element(vect.begin(), vect.end()); 
  
    cout << "\nMinimum element of vector is: "; 
    cout << *min_element(vect.begin(), vect.end()); 
  
    // Starting the summation from 0 
    cout << "\nThe summation of vector elements is: "; 
    cout << accumulate(vect.begin(), vect.end(), 0); 
  
    return 0; 
} 
```

<br><br>

#### OUPTUT
```
Vector before sorting is: 10 20 5 23 42 15 
Vector after sorting is: 5 10 15 20 23 42 
Vector before reversing is: 5 10 15 20 23 42 
Vector after reversing is: 42 23 20 15 10 5 
Maximum element of vector is: 42
Minimum element of vector is: 5
The summation of vector elements is: 115
```

### COUNT & FIND
```
count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector.
```
<br><br>

```c++
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {10, 20, 5, 23 ,42, 20, 15}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Occurrences of 20 in vector : "; 
  
    // Counts the occurrences of 20 from 1st to 
    // last element 
    cout << count(vect.begin(), vect.end(), 20); 
  
    // find() returns iterator to last address if 
    // element not present 
    find(vect.begin(), vect.end(),5) != vect.end()? 
                         cout << "\nElement found": 
                     cout << "\nElement not found"; 
  
    return 0; 
}
```

#### Output

```
Occurrences of 20 in vector: 2
Element found
```

### BINARY_SEARCH, LOWER_BOUND, UPPER_BOUND, RANGE

```
binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.
```

```c++
// C++ program to demonstrate working of lower_bound() 
// and upper_bound(). 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    // Sort the array to make sure that lower_bound() 
    // and upper_bound() work. 
    sort(vect.begin(), vect.end()); 
  
    // Returns the first occurrence of 20 
    auto q = lower_bound(vect.begin(), vect.end(), 20); 
  
    // Returns the last occurrence of 20 
    auto p = upper_bound(vect.begin(), vect.end(), 20); 
  
    cout << "The lower bound is at position: "; 
    cout << q-vect.begin() << endl; 
  
    cout << "The upper bound is at position: "; 
    cout << p-vect.begin() << endl; 
  
    return 0; 
} 
```

#### Output
```
The lower bound is at position: 3
The upper bound is at position: 5
```

## Some Manipulating Algorithms

### ERASE
arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes <br> the vector elements accordingly.
arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted <br> vector in a single line.

```c++
// C++ program to demonstrate working of erase() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Vector is :"; 
    for (int i=0; i<6; i++) 
        cout << vect[i]<<" "; 
  
    // Delete second element of vector 
    vect.erase(vect.begin()+1); 
  
    cout << "\nVector after erasing the element: "; 
    for (int i=0; i<5; i++) 
        cout << vect[i] << " "; 
  
    // sorting to enable use of unique() 
    sort(vect.begin(), vect.end()); 
  
    cout << "\nVector before removing duplicate "
             " occurrences: "; 
    for (int i=0; i<5; i++) 
        cout << vect[i] << " "; 
  
    // Deletes the duplicate occurrences 
    vect.erase(unique(vect.begin(),vect.end()),vect.end()); 
  
    cout << "\nVector after deleting duplicates: "; 
    for (int i=0; i< vect.size(); i++) 
        cout << vect[i] << " "; 
  
    return 0; 
}
```

#### Output

```
Vector is :5 10 15 20 20 23 
Vector after erasing the element: 5 15 20 20 23 
Vector before removing duplicate  occurrences: 5 15 20 20 23 
Vector after deleting duplicates: 5 15 20 23 42 45 
```

### NEXT_PERMUTATION, PREV_PERMUTATION

```
next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
```

```c++
// C++ program to demonstrate working of next_permutation() 
// and prev_permutation() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    cout << "Given Vector is:\n"; 
    for (int i=0; i<n; i++) 
        cout << vect[i] << " "; 
  
    // modifies vector to its next permutation order 
    next_permutation(vect.begin(), vect.end()); 
    cout << "\nVector after performing next permutation:\n"; 
    for (int i=0; i<n; i++) 
        cout << vect[i] << " "; 
  
    prev_permutation(vect.begin(), vect.end()); 
    cout << "\nVector after performing prev permutation:\n"; 
    for (int i=0; i<n; i++) 
        cout << vect[i] << " "; 
  
    return 0; 
} 
```

#### Output

```
Given Vector is:
5 10 15 20 20 23 42 45 
Vector after performing next permutation:
5 10 15 20 20 23 45 42 
Vector after performing prev permutation:
5 10 15 20 20 23 42 45 
```

### DISTANCE 
distance(first_iterator,desired_position) – It returns the distance of desired position from the first <br> iterator.This function is very useful while finding the index.

```c++
// C++ program to demonstrate working of distance() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vect(arr, arr+n); 
  
    // Return distance of first to maximum element 
    cout << "Distance between first to max element: ";  
    cout << distance(vect.begin(), 
                     max_element(vect.begin(), vect.end())); 
    return 0; 
} 
```

#### Output

```
Distance between first to max element: 7
```

Credits - (GEEKSFORGEEKS)[https://www.geeksforgeeks.org/c-magicians-stl-algorithms/].