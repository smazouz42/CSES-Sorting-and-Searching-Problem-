# CSES-Sorting-and-Searching-Problems
In this project, I am embarking on the challenge of solving all sorting and searching problems on the CSES platform using C++. The unique twist here is that I will refrain from seeking help on the internet, ensuring that my solutions are entirely self-derived.

Information about time complexity :
O(n): Describes the linear time complexity, where the time taken by the algorithm grows linearly with the size of the input array n.

O(log(n)): Describes logarithmic time complexity, which often occurs in algorithms that divide the problem into smaller parts. In your case

1 : Distinct number solution :
  
  - In this problem, we are given an array of integers, and our goal is to determine the count of distinct numbers in the array. For this task, we    can leverage the set container, a built-in feature in C++. The set ensures that each unique element is stored only once. To implement the solution:
  1 : Create a set to store the distinct numbers.
  2 : Iterate through the array, inserting each element into the set.
  3 : Finally, print the size of the set, which corresponds to the count of distinct numbers in the array.

  - The complexity of my logic: I iterate through my array and insert elements from the array into my     
  set. The insertion in the set takes O(log(n)), so the complexity of my program is O(n + log(n))."

   
