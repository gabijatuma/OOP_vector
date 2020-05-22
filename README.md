# OOP_vector

In this project i have tried to create a vector-like class that could be used instead of the std::vector. For now it has the following functions/constructors:

*void alloc_new()*        //allocates new space

*myvector()*             // constructor

*myvector(const myvector& v)*  //copy constructor

*void push_back(DT)*          //ads the specified element to the back of the vector

*int size()*                 // returns the size

*DT operator[](int i)*      //allows the usage of []

*myvector& operator+=(DT i)*               //allows the usage of +-

*myvector& operator=(const myvector& v)*  //allows the usage of =

*DT at (int i)*

*long long getcapacity()*               //returns the current capacity of the vector

*void resize(int count)*               //resizes the vector 

(the DT is a template so that i could create vector classes of multiple types)


I wanted to check how optimised my_vector class is, so i did a time comparrison between my_vector class and std::vector container when they had to push back 10000, 100000, 1000000, 10000000 an 100000000 <int> elements. These are the results:
 
 ![myvector_comparrison](https://user-images.githubusercontent.com/60934852/82640570-82250f80-9c13-11ea-9fac-43f0d792da21.jpg)
 
 My vector container does not work as well when put into my previous work. It requires more time and stops after bigger amounts of data:
 
 ![times](https://user-images.githubusercontent.com/60934852/82643397-18f3cb00-9c18-11ea-97fe-88f1b5367a35.jpg)
 
 I checked how many times the capacity equals the sive of both containers with int as well:
 
 ![new_vector](https://user-images.githubusercontent.com/60934852/82643479-3d4fa780-9c18-11ea-8093-f2af5e177521.jpg)

