1. Start
2. Input the total number of students enrolled in the subject
3. Loop over each student:
   a. Input student's name, student ID, marks for assignments, CATs, and final examination
   b. Calculate the total mark using the weighted average formula:
      total_mark = (assignments_mark * 0.1) + (cats_mark * 0.2) + (exam_mark * 0.7)
   c. Check if the total_mark is greater than or equal to 40:
      - If yes, assign the grade based on the following criteria:
        - 70 and above: grade is A
        - 60 to 69: grade is B
        - 50 to 59: grade is C
        - 40 to 49: grade is D
        - below 40: grade is F
      - If no, upgrade the total_mark to 40 and assign the grade as D
   d. Output student's name, student ID, total mark, and grade
   e. Check if the grade is A:
      - If yes, increment the counter for students with grade A
   f. Check if the total mark is greater than or equal to 40:
      - If yes, increment the counter for passing students
4. Output the total number of students who passed the subject and the total number of students who received a grade of A
5. End
