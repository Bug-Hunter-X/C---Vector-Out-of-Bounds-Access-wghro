std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[0]; 
int val = ptr[10]; // Accessing memory beyond the vector's bounds