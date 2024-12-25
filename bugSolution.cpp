std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
// Safe way to access elements
int val1 = vec.at(5); // Throws an exception if out of bounds
if(vec.size() > 5){
int val2 = vec[5]; // Accessing element using bounds checking 
}
int *ptr = vec.data(); // use data() method to obtain a pointer to the beginning of the vector's internal array. 