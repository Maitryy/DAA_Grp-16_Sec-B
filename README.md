# DAA_Grp-16_Sec-B
**Team Members**

    IIT2019099 Nitesh Rawat  
    IIT2019100 Maitry Jadiya  
    IIT2019101 Aryan Gupta 

**Mentors:** 

    Faculty Name-Dr. Rahul Kala
    Mentor Name- Md. Meraz

**Problem Statement**
Problem Statement Given an array that represents elements of arithmetic progression in order. One element is missing in the progression, find the missing number.

**How to use code **

      Download project git clone https://github.com/Maitryy/DAA_Grp-16_Sec-B 
      Run the Code1.cpp file in a compiler
      Or run the Code2.cpp file in a compiler
      And Enter the input in the format given below:
      
**  Input Format : **

    Enter an integer n which is the length of the array.
    Then enter n number of element with either space or line break between them.
    
  **Input / Output**
  
      Input-1: 5
               2 4 8 10 12
      Input-2: 6
               3 6 12 15 18 21 
      Input-3: 4
               5 10 15 20
      Output-1: 6
      Output-2: 9
      Output-3: No missing term.
      
**Theory**
The given problem can besolved using divide and conquer approach which is similar to binarysearch.Basically we divide the givenproblem into smaller sub-problemsand appropriately combine their solutions to get the solution to the main problem. In the first approach we compare the input array with the actual array without any missing term and check the position of the mid element and keep dividing the input array in half until we find the first mismatched element. The idea is to keep on checking the difference between the middle element and its adjacent elements unless the difference is not equal to the desired common difference in the second approach. 
      
 **Time Complexity**
 
        Approch-1: Time Complexity:
                   Average: O(log n), Best: O(log n), Worst: O(log n)
        Approch-2: Time Complexity:
                   Average: O(log n), Best: O(1), Worst: O(log n)
 
 **Space Complexity**
      
        Approch-1: Space Complexity: O(n)
        Approch-2: Space Complexity: O(log n)

**References**
       
       1] Introduction to Algorithms / Thomas H. Cormen . . . [et al.]. - 3rd edition.
       [2] The Design and Analysis of Algorithms (Pearson) by A V Aho, J E Hopcroft, and J D Ullman.
       [3] Algorithm Design (Pearson) by J Kleinberg, and E Tard.
       [4] https://www.geeksforgeeks.org/findmissing-number-arithmetic-progression/
